// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>
#include "../inst/include/rotations2.h"
#include <string>
#include <set>

using namespace Rcpp;

// eskewC
arma::mat eskewC(arma::rowvec U);
static SEXP rotations2_eskewC_try(SEXP USEXP) {
BEGIN_RCPP
    arma::rowvec U = Rcpp::as<arma::rowvec >(USEXP);
    arma::mat __result = eskewC(U);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_eskewC(SEXP USEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_eskewC_try(USEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// SO3defaultC
arma::mat SO3defaultC(arma::mat U, arma::vec theta);
static SEXP rotations2_SO3defaultC_try(SEXP USEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    arma::mat U = Rcpp::as<arma::mat >(USEXP);
    arma::vec theta = Rcpp::as<arma::vec >(thetaSEXP);
    arma::mat __result = SO3defaultC(U, theta);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_SO3defaultC(SEXP USEXP, SEXP thetaSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_SO3defaultC_try(USEXP, thetaSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// Q4defaultC
arma::mat Q4defaultC(arma::mat U, arma::vec theta);
static SEXP rotations2_Q4defaultC_try(SEXP USEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    arma::mat U = Rcpp::as<arma::mat >(USEXP);
    arma::vec theta = Rcpp::as<arma::vec >(thetaSEXP);
    arma::mat __result = Q4defaultC(U, theta);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_Q4defaultC(SEXP USEXP, SEXP thetaSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_Q4defaultC_try(USEXP, thetaSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// pMatC
arma::mat pMatC(arma::mat p);
static SEXP rotations2_pMatC_try(SEXP pSEXP) {
BEGIN_RCPP
    arma::mat p = Rcpp::as<arma::mat >(pSEXP);
    arma::mat __result = pMatC(p);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_pMatC(SEXP pSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_pMatC_try(pSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// genrC
arma::mat genrC(arma::vec r, arma::mat S, int SO3, arma::mat u);
static SEXP rotations2_genrC_try(SEXP rSEXP, SEXP SSEXP, SEXP SO3SEXP, SEXP uSEXP) {
BEGIN_RCPP
    arma::vec r = Rcpp::as<arma::vec >(rSEXP);
    arma::mat S = Rcpp::as<arma::mat >(SSEXP);
    int SO3 = Rcpp::as<int >(SO3SEXP);
    arma::mat u = Rcpp::as<arma::mat >(uSEXP);
    arma::mat __result = genrC(r, S, SO3, u);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_genrC(SEXP rSEXP, SEXP SSEXP, SEXP SO3SEXP, SEXP uSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_genrC_try(rSEXP, SSEXP, SO3SEXP, uSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// checkQ4
int checkQ4(NumericMatrix Q);
static SEXP rotations2_checkQ4_try(SEXP QSEXP) {
BEGIN_RCPP
    NumericMatrix Q = Rcpp::as<NumericMatrix >(QSEXP);
    int __result = checkQ4(Q);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_checkQ4(SEXP QSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_checkQ4_try(QSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// checkSO3
int checkSO3(arma::mat Rs);
static SEXP rotations2_checkSO3_try(SEXP RsSEXP) {
BEGIN_RCPP
    arma::mat Rs = Rcpp::as<arma::mat >(RsSEXP);
    int __result = checkSO3(Rs);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_checkSO3(SEXP RsSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_checkSO3_try(RsSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// expskewC
arma::mat expskewC(arma::mat M);
static SEXP rotations2_expskewC_try(SEXP MSEXP) {
BEGIN_RCPP
    arma::mat M = Rcpp::as<arma::mat >(MSEXP);
    arma::mat __result = expskewC(M);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_expskewC(SEXP MSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_expskewC_try(MSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// rdistSO3C
arma::rowvec rdistSO3C(arma::mat Rs, arma::mat R2);
static SEXP rotations2_rdistSO3C_try(SEXP RsSEXP, SEXP R2SEXP) {
BEGIN_RCPP
    arma::mat Rs = Rcpp::as<arma::mat >(RsSEXP);
    arma::mat R2 = Rcpp::as<arma::mat >(R2SEXP);
    arma::rowvec __result = rdistSO3C(Rs, R2);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_rdistSO3C(SEXP RsSEXP, SEXP R2SEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_rdistSO3C_try(RsSEXP, R2SEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// logSO3C
arma::mat logSO3C(arma::mat R);
static SEXP rotations2_logSO3C_try(SEXP RSEXP) {
BEGIN_RCPP
    arma::mat R = Rcpp::as<arma::mat >(RSEXP);
    arma::mat __result = logSO3C(R);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_logSO3C(SEXP RSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_logSO3C_try(RSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// projectSO3C
arma::mat projectSO3C(arma::mat M);
static SEXP rotations2_projectSO3C_try(SEXP MSEXP) {
BEGIN_RCPP
    arma::mat M = Rcpp::as<arma::mat >(MSEXP);
    arma::mat __result = projectSO3C(M);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_projectSO3C(SEXP MSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_projectSO3C_try(MSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// meanSO3C
arma::mat meanSO3C(arma::mat Rs);
static SEXP rotations2_meanSO3C_try(SEXP RsSEXP) {
BEGIN_RCPP
    arma::mat Rs = Rcpp::as<arma::mat >(RsSEXP);
    arma::mat __result = meanSO3C(Rs);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_meanSO3C(SEXP RsSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_meanSO3C_try(RsSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// meanQ4C
arma::rowvec meanQ4C(arma::mat Q);
static SEXP rotations2_meanQ4C_try(SEXP QSEXP) {
BEGIN_RCPP
    arma::mat Q = Rcpp::as<arma::mat >(QSEXP);
    arma::rowvec __result = meanQ4C(Q);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_meanQ4C(SEXP QSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_meanQ4C_try(QSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// medianSO3C
arma::mat medianSO3C(arma::mat Rs, int maxIterations, double maxEps);
static SEXP rotations2_medianSO3C_try(SEXP RsSEXP, SEXP maxIterationsSEXP, SEXP maxEpsSEXP) {
BEGIN_RCPP
    arma::mat Rs = Rcpp::as<arma::mat >(RsSEXP);
    int maxIterations = Rcpp::as<int >(maxIterationsSEXP);
    double maxEps = Rcpp::as<double >(maxEpsSEXP);
    arma::mat __result = medianSO3C(Rs, maxIterations, maxEps);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_medianSO3C(SEXP RsSEXP, SEXP maxIterationsSEXP, SEXP maxEpsSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_medianSO3C_try(RsSEXP, maxIterationsSEXP, maxEpsSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// HartmedianSO3C
arma::mat HartmedianSO3C(arma::mat Rs, int maxIterations, double maxEps);
static SEXP rotations2_HartmedianSO3C_try(SEXP RsSEXP, SEXP maxIterationsSEXP, SEXP maxEpsSEXP) {
BEGIN_RCPP
    arma::mat Rs = Rcpp::as<arma::mat >(RsSEXP);
    int maxIterations = Rcpp::as<int >(maxIterationsSEXP);
    double maxEps = Rcpp::as<double >(maxEpsSEXP);
    arma::mat __result = HartmedianSO3C(Rs, maxIterations, maxEps);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_HartmedianSO3C(SEXP RsSEXP, SEXP maxIterationsSEXP, SEXP maxEpsSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_HartmedianSO3C_try(RsSEXP, maxIterationsSEXP, maxEpsSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// gmeanSO3C
arma::mat gmeanSO3C(arma::mat Rs, int maxIterations, double maxEps);
static SEXP rotations2_gmeanSO3C_try(SEXP RsSEXP, SEXP maxIterationsSEXP, SEXP maxEpsSEXP) {
BEGIN_RCPP
    arma::mat Rs = Rcpp::as<arma::mat >(RsSEXP);
    int maxIterations = Rcpp::as<int >(maxIterationsSEXP);
    double maxEps = Rcpp::as<double >(maxEpsSEXP);
    arma::mat __result = gmeanSO3C(Rs, maxIterations, maxEps);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_gmeanSO3C(SEXP RsSEXP, SEXP maxIterationsSEXP, SEXP maxEpsSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_gmeanSO3C_try(RsSEXP, maxIterationsSEXP, maxEpsSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// fisherAxisC
double fisherAxisC(arma::mat Qs, arma::rowvec Qhat);
static SEXP rotations2_fisherAxisC_try(SEXP QsSEXP, SEXP QhatSEXP) {
BEGIN_RCPP
    arma::mat Qs = Rcpp::as<arma::mat >(QsSEXP);
    arma::rowvec Qhat = Rcpp::as<arma::rowvec >(QhatSEXP);
    double __result = fisherAxisC(Qs, Qhat);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_fisherAxisC(SEXP QsSEXP, SEXP QhatSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_fisherAxisC_try(QsSEXP, QhatSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// fisherBootC
arma::vec fisherBootC(arma::mat Qs, int m);
static SEXP rotations2_fisherBootC_try(SEXP QsSEXP, SEXP mSEXP) {
BEGIN_RCPP
    arma::mat Qs = Rcpp::as<arma::mat >(QsSEXP);
    int m = Rcpp::as<int >(mSEXP);
    arma::vec __result = fisherBootC(Qs, m);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_fisherBootC(SEXP QsSEXP, SEXP mSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_fisherBootC_try(QsSEXP, mSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// RdistC
NumericVector RdistC(NumericMatrix Q1, NumericVector Q2);
static SEXP rotations2_RdistC_try(SEXP Q1SEXP, SEXP Q2SEXP) {
BEGIN_RCPP
    NumericMatrix Q1 = Rcpp::as<NumericMatrix >(Q1SEXP);
    NumericVector Q2 = Rcpp::as<NumericVector >(Q2SEXP);
    NumericVector __result = RdistC(Q1, Q2);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_RdistC(SEXP Q1SEXP, SEXP Q2SEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_RdistC_try(Q1SEXP, Q2SEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// oneRdistC
double oneRdistC(NumericMatrix Q1, NumericVector Q2);
static SEXP rotations2_oneRdistC_try(SEXP Q1SEXP, SEXP Q2SEXP) {
BEGIN_RCPP
    NumericMatrix Q1 = Rcpp::as<NumericMatrix >(Q1SEXP);
    NumericVector Q2 = Rcpp::as<NumericVector >(Q2SEXP);
    double __result = oneRdistC(Q1, Q2);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_oneRdistC(SEXP Q1SEXP, SEXP Q2SEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_oneRdistC_try(Q1SEXP, Q2SEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// cdfunsC
NumericVector cdfunsC(NumericMatrix Qs, NumericVector Qhat);
static SEXP rotations2_cdfunsC_try(SEXP QsSEXP, SEXP QhatSEXP) {
BEGIN_RCPP
    NumericMatrix Qs = Rcpp::as<NumericMatrix >(QsSEXP);
    NumericVector Qhat = Rcpp::as<NumericVector >(QhatSEXP);
    NumericVector __result = cdfunsC(Qs, Qhat);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_cdfunsC(SEXP QsSEXP, SEXP QhatSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_cdfunsC_try(QsSEXP, QhatSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}
// zhangQ4
NumericVector zhangQ4(NumericMatrix Q, int m);
static SEXP rotations2_zhangQ4_try(SEXP QSEXP, SEXP mSEXP) {
BEGIN_RCPP
    NumericMatrix Q = Rcpp::as<NumericMatrix >(QSEXP);
    int m = Rcpp::as<int >(mSEXP);
    NumericVector __result = zhangQ4(Q, m);
    return Rcpp::wrap(__result);
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rotations2_zhangQ4(SEXP QSEXP, SEXP mSEXP) {
    Rcpp::RNGScope __rngScope;
    SEXP __result = PROTECT(rotations2_zhangQ4_try(QSEXP, mSEXP));
    Rboolean __isError = Rf_inherits(__result, "try-error");
    UNPROTECT(1);
    if (__isError)
        Rf_error(CHAR(Rf_asChar(__result)));
    return __result;
}

// validate (ensure exported C++ functions exist before calling them)
static int rotations2_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("arma::mat(*eskewC)(arma::rowvec)");
        signatures.insert("arma::mat(*SO3defaultC)(arma::mat,arma::vec)");
        signatures.insert("arma::mat(*Q4defaultC)(arma::mat,arma::vec)");
        signatures.insert("arma::mat(*pMatC)(arma::mat)");
        signatures.insert("arma::mat(*genrC)(arma::vec,arma::mat,int,arma::mat)");
        signatures.insert("int(*checkQ4)(NumericMatrix)");
        signatures.insert("int(*checkSO3)(arma::mat)");
        signatures.insert("arma::mat(*expskewC)(arma::mat)");
        signatures.insert("arma::rowvec(*rdistSO3C)(arma::mat,arma::mat)");
        signatures.insert("arma::mat(*logSO3C)(arma::mat)");
        signatures.insert("arma::mat(*projectSO3C)(arma::mat)");
        signatures.insert("arma::mat(*meanSO3C)(arma::mat)");
        signatures.insert("arma::rowvec(*meanQ4C)(arma::mat)");
        signatures.insert("arma::mat(*medianSO3C)(arma::mat,int,double)");
        signatures.insert("arma::mat(*HartmedianSO3C)(arma::mat,int,double)");
        signatures.insert("arma::mat(*gmeanSO3C)(arma::mat,int,double)");
        signatures.insert("double(*fisherAxisC)(arma::mat,arma::rowvec)");
        signatures.insert("arma::vec(*fisherBootC)(arma::mat,int)");
        signatures.insert("NumericVector(*RdistC)(NumericMatrix,NumericVector)");
        signatures.insert("double(*oneRdistC)(NumericMatrix,NumericVector)");
        signatures.insert("NumericVector(*cdfunsC)(NumericMatrix,NumericVector)");
        signatures.insert("NumericVector(*zhangQ4)(NumericMatrix,int)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP rotations2_RcppExport_registerCCallable() { 
    R_RegisterCCallable("rotations2", "rotations2_eskewC", (DL_FUNC)rotations2_eskewC_try);
    R_RegisterCCallable("rotations2", "rotations2_SO3defaultC", (DL_FUNC)rotations2_SO3defaultC_try);
    R_RegisterCCallable("rotations2", "rotations2_Q4defaultC", (DL_FUNC)rotations2_Q4defaultC_try);
    R_RegisterCCallable("rotations2", "rotations2_pMatC", (DL_FUNC)rotations2_pMatC_try);
    R_RegisterCCallable("rotations2", "rotations2_genrC", (DL_FUNC)rotations2_genrC_try);
    R_RegisterCCallable("rotations2", "rotations2_checkQ4", (DL_FUNC)rotations2_checkQ4_try);
    R_RegisterCCallable("rotations2", "rotations2_checkSO3", (DL_FUNC)rotations2_checkSO3_try);
    R_RegisterCCallable("rotations2", "rotations2_expskewC", (DL_FUNC)rotations2_expskewC_try);
    R_RegisterCCallable("rotations2", "rotations2_rdistSO3C", (DL_FUNC)rotations2_rdistSO3C_try);
    R_RegisterCCallable("rotations2", "rotations2_logSO3C", (DL_FUNC)rotations2_logSO3C_try);
    R_RegisterCCallable("rotations2", "rotations2_projectSO3C", (DL_FUNC)rotations2_projectSO3C_try);
    R_RegisterCCallable("rotations2", "rotations2_meanSO3C", (DL_FUNC)rotations2_meanSO3C_try);
    R_RegisterCCallable("rotations2", "rotations2_meanQ4C", (DL_FUNC)rotations2_meanQ4C_try);
    R_RegisterCCallable("rotations2", "rotations2_medianSO3C", (DL_FUNC)rotations2_medianSO3C_try);
    R_RegisterCCallable("rotations2", "rotations2_HartmedianSO3C", (DL_FUNC)rotations2_HartmedianSO3C_try);
    R_RegisterCCallable("rotations2", "rotations2_gmeanSO3C", (DL_FUNC)rotations2_gmeanSO3C_try);
    R_RegisterCCallable("rotations2", "rotations2_fisherAxisC", (DL_FUNC)rotations2_fisherAxisC_try);
    R_RegisterCCallable("rotations2", "rotations2_fisherBootC", (DL_FUNC)rotations2_fisherBootC_try);
    R_RegisterCCallable("rotations2", "rotations2_RdistC", (DL_FUNC)rotations2_RdistC_try);
    R_RegisterCCallable("rotations2", "rotations2_oneRdistC", (DL_FUNC)rotations2_oneRdistC_try);
    R_RegisterCCallable("rotations2", "rotations2_cdfunsC", (DL_FUNC)rotations2_cdfunsC_try);
    R_RegisterCCallable("rotations2", "rotations2_zhangQ4", (DL_FUNC)rotations2_zhangQ4_try);
    R_RegisterCCallable("rotations2", "rotations2_RcppExport_validate", (DL_FUNC)rotations2_RcppExport_validate);
    return R_NilValue;
}