\name{rot.dist}
\alias{rot.dist}
\alias{rot.dist.Q4}
\alias{rot.dist.SO3}
\title{Rotational distance}
\usage{
  rot.dist(x, ...)

  \method{rot.dist}{SO3} (x, R2 = id.SO3,
    method = "extrinsic", p = 1, ...)

  \method{rot.dist}{Q4} (x, Q2 = id.Q4,
    method = "extrinsic", p = 1, ...)
}
\arguments{
  \item{x}{\eqn{n\times p}{n-by-p} matrix where each row
  corresponds to a random rotation in matrix (\eqn{p=9}) or
  quaternion (\eqn{p=4}) form.}

  \item{R2,Q2}{the second rotation in the same
  parameterization as x.}

  \item{method}{string indicating "extrinsic" or
  "intrinsic" method of distance.}

  \item{p}{the order of the distance.}

  \item{...}{additional arguments.}
}
\value{
  The rotational distance between each rotation in x and R2
  or Q2.
}
\description{
  Calculate the extrinsic or intrinsic distance between two
  rotations.
}
\details{
  This function will calculate the intrinsic (Riemannian)
  or extrinsic (Euclidean) distance between two rotations.
  \code{R2} and \code{Q2} are set to the identity rotations
  by default.  For rotations \eqn{R_1}{R1} and
  \eqn{R_2}{R2} both in \eqn{SO(3)}, the Euclidean distance
  between them is \deqn{||R_1-R_2||_F}{||R1-R2||} where
  \eqn{||\cdot||_F}{|| ||} is the Frobenius norm. The
  Riemannian distance is defined as \deqn{||Log(R_1^\top
  R_2)||_F}{||Log(R1'R2)||} where \eqn{Log} is the matrix
  logarithm, and it corresponds to the misorientation angle
  of \eqn{R_1^\top R_2}{R1'R2}.  See the vignette
  `rotations-intro' for a comparison of these two distance
  measures.
}
\examples{
rs <- rcayley(20, kappa = 10)
Rs <- genR(rs, S = id.SO3)
dEs <- rot.dist(Rs,id.SO3)
dRs <- rot.dist(Rs, id.SO3 , method = "intrinsic")

#The intrinsic distance between the true central orientation and each observation
#is the same as the absolute value of observations' respective misorientation angles
all.equal(dRs, abs(rs))              #TRUE

#The extrinsic distance is related to the intrinsic distance
all.equal(dEs, 2*sqrt(2)*sin(dRs/2)) #TRUE
}

