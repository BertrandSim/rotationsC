// [[Rcpp::depends(RcppArmadillo)]]
#include <RcppArmadillo.h>  

using namespace Rcpp;

// [[Rcpp::export]]
arma::mat centerCpp(arma::mat Rs, arma::mat S){
  
  //Center the dataset Rs around S, so each row of Rs denoted R is replaces with S'R
  int n = Rs.n_rows;
  arma::mat Rsi(3,3), cRs(n,9);
  int i = 0, j=0;
  
  for(i=0;i<n;i++){
    
    for(j=0;j<9;j++){
     Rsi[j] = Rs(i,j); 
    } 
    
    Rsi = S.t()*Rsi;
    
    for(j=0;j<9;j++){
      cRs(i,j) = Rsi[j];
    }
    
  }
  return cRs;
}

// [[Rcpp::export]]
double gvmUARSC(arma::mat Rs, arma::mat S, double kappa){
  
  int n = Rs.n_rows;
  arma::mat cRs = centerCpp(Rs,S);
  arma::mat trcRs(n,3);
  
  trcRs.col(0)=cRs.col(0);
  trcRs.col(1)=cRs.col(4);
  trcRs.col(2)=cRs.col(8);
  
  arma::colvec traces = sum(trcRs,1);

  double n1 = exp(kappa*sum(traces-1)/2);
  
  double I0k = R::bessel_i(kappa,0,1);
  double I1k = R::bessel_i(kappa,1,1);
  
  double n2 = sqrt(pow(I0k,2)-(I0k*I1k/kappa)-pow(I1k,2));
  double d1 = pow(I0k,(n+1));
  arma::colvec d2 = 3-traces;
  double d3 = 1;
  for(int i=0; i<n ; i++){
    d3 *= d2[i];
  }
  
  return (n1*n2)/(d1*d3);
}


// [[Rcpp::export]]
double gfUARSC(arma::mat Rs, arma::mat S, double kappa){
  
  int n = Rs.n_rows;
  arma::mat cRs = centerCpp(Rs,S);
  arma::mat trcRs(n,3);
  
  trcRs.col(0)=cRs.col(0);
  trcRs.col(1)=cRs.col(4);
  trcRs.col(2)=cRs.col(8);
  
  arma::colvec traces = sum(trcRs,1);
  
  double n1 = exp(kappa*sum(traces)-n);
  double I02k = R::bessel_i(2*kappa,0,1);
  double I12k = R::bessel_i(2*kappa,1,1);
  double n2 = sqrt(2*pow(I02k,2)/kappa-2*I02k*I12k/pow(kappa,2)+((1/pow(kappa,2))-(2/kappa))*pow(I12k,2)); 
  double d1 = pow(I02k-I12k,n+1);
  return (n1*n2)/d1;
}



// [[Rcpp::export]]
double gcayUARSC(arma::mat Rs, arma::mat S, double kappa){
 
   int n = Rs.n_rows;
  arma::mat cRs = centerCpp(Rs,S);
  arma::mat trcRs(n,3);
  
  trcRs.col(0)=cRs.col(0);
  trcRs.col(1)=cRs.col(4);
  trcRs.col(2)=cRs.col(8);
  
  arma::colvec traces = sum(trcRs,1);

  double p1 = pow(sqrt(PI)*R::gammafn(kappa+2)/R::gammafn(kappa+0.5),n);
  double p2 = sqrt(R::trigamma(kappa+0.5)-R::trigamma(kappa+2));
  arma::colvec p3 = pow(0.5+0.25*(traces-1),kappa);
  double p4 = 1;
  
  for(int i=0;i<n;i++){
    p4 *= p3[i]; 
  }

  return p1*p2*p4;
 
}


// [[Rcpp::export]]
arma::mat eskewC(arma::rowvec U) {
  
  double ulen=norm(U,2);
  
  U = U/ulen;
  
  double u = U(0);
  double v = U(1);
  double w = U(2);
  
  arma::mat33 res;
  res.zeros();
  res(0,1) = -w;
  res(1,0) = w;
  res(0,2) = v;
  res(2,0) = -v;
  res(1,2) = -u;
  res(2,1) = u;
  
  return res;
}

arma::mat genrC(arma::mat S,double r) {
  
  RNGScope scope;

  NumericVector ta = runif(1,-1,1);
  double theta = ta[0];
  theta = acos(theta);
    
  NumericVector ph = runif(1, -M_PI, M_PI);
  double phi = ph[0];
  
  arma::rowvec u(3);
  
  u(0)=sin(theta) * cos(phi);
  u(1)=sin(theta) * sin(phi);
  u(2)=cos(theta);

  arma::mat Ri, I(3,3), SS;
  I.eye();
  Ri = u.t() * u;
  SS = eskewC(u);
  Ri = Ri + (I - Ri) * cos(r) +  SS * sin(r);
  Ri = S * Ri;
  return Ri;

}

double rcayleyCpp(double kappa){
  RNGScope scope;
  NumericVector bet(1), alp(1);
  
  bet = rbeta(1,kappa+0.5,1.5);
  alp = rbinom(1,1,0.5);
 
  double theta = acos(2*bet[0]-1)*(1-2*alp[0]);
  return theta;
}

// [[Rcpp::export]]
arma::mat S_MCMC_CPP(arma::mat Rs, arma::mat oldS, double rho, double kappa, bool Cayley){
  RNGScope scope;
  
  double r, rj1;
  NumericVector W1(1);
  r = rcayleyCpp(rho);
  arma::mat Sstar = genrC(oldS,r);
  
  if(Cayley){
    rj1 = gcayUARSC(Rs,Sstar,kappa);
    rj1 /= gcayUARSC(Rs,oldS,kappa);
  }else{
    rj1 = gfUARSC(Rs,Sstar,kappa);
    rj1 /= gfUARSC(Rs,oldS,kappa);
  }
  
  if(!std::isfinite(rj1)){
    rj1 = 0;
  }
  
  if(rj1>1){
    rj1 = 1;
  }
  
  W1=rbinom(1,1,rj1);
  
  if(W1[0]==1){
    return Sstar;
  }else{
    return oldS;
  }
  
}

// [[Rcpp::export]]
double kap_MCMC_CPP(arma::mat Rs, double oldKappa, double sigma, arma::mat S, bool Cayley){
  RNGScope scope;
  
  double  rj2, kappaStar;
  NumericVector kappaS(1), W2(1);
  
  kappaS = rnorm(1,log(oldKappa),sigma);
  kappaStar = exp(kappaS[0]);
  
  if(Cayley){
    rj2 = kappaStar*gcayUARSC(Rs,S,kappaStar);
    rj2 /= oldKappa*gcayUARSC(Rs,S,kappaStar);
  }else{
    rj2 = kappaStar*gfUARSC(Rs,S,kappaStar);
    rj2 /= oldKappa*gfUARSC(Rs,S,kappaStar);
  }
  
  if(!std::isfinite(rj2)){
    rj2 = 0;
  }
  
  
  if(rj2>1){
    rj2 = 1;
  }
  
  W2=rbinom(1,1,rj2);
  
  if(W2[0]==1){
    return kappaStar;
  }else{
    return oldKappa;
  }
  
}


// [[Rcpp::export]]
arma::rowvec afun_CPP(arma::mat R1, arma::mat R2){
  
  int j, n = R1.n_rows;
  arma::mat Ri(3,3);
  arma::rowvec as(n), ds(3);
  as.zeros();
  
  for(int i=0;i<n;i++){
    
    for(j=0;j<9;j++){
      Ri[j]=R1(i,j);
    }
    
    Ri = Ri.t()*R2;
    
    ds(0)=acos(Ri(0,0));
    ds(1)=acos(Ri(1,1));
    ds(2)=acos(Ri(2,2));
    
    as[i]=max(ds);
  }
  return as;
}


// [[Rcpp::export]]

List both_MCMC_CPP(arma::mat Rs, arma::mat S0, double kappa0, double rho, double sigma, int burnin, int B, bool Cayley){
  
  int i=0,j=0;
  double Scount=0, Kcount=0;
  arma::mat Sdraws(B,9);
  Sdraws.zeros();
  NumericVector Kdraws(B);
  arma::mat Snew = S0;
  double Knew = kappa0;
  List out;
  
  for(i=0;i<burnin;i++){
    Snew = S_MCMC_CPP(Rs,Snew,rho,Knew,Cayley);
    Knew = kap_MCMC_CPP(Rs,Knew,sigma,Snew,Cayley);
  }
  
  Kdraws(0) = Knew;
  
  for(j=0;j<9;j++){
    Sdraws(0,j) = Snew[j];
  }
  
  for(i=1;i<B;i++){
    S0 = Snew;
    Snew = S_MCMC_CPP(Rs,S0,rho,Kdraws[(i-1)],Cayley);
    
    if(accu(abs(S0-Snew))<10e-5){
      Sdraws.row(i)=Sdraws.row((i-1));
    }else{
        Scount += 1;
        
        for(j=0;j<9;j++){
          Sdraws(i,j) = Snew[j];
        }
    }
    
    Kdraws[i] = kap_MCMC_CPP(Rs,Kdraws[(i-1)],sigma,Snew,Cayley);
    
    if(abs(Kdraws[i]-Kdraws[(i-1)])>10e-10){
      Kcount +=1;
    }
    
  }
  
  out["S"] = Sdraws;
  out["kappa"] = Kdraws;
  out["Saccept"] = Scount/B;
  out["Kaccept"] = Kcount/B;
  
  return out;
}
