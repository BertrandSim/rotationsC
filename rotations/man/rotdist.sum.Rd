\name{rotdist.sum}
\alias{rotdist.sum}
\alias{rotdist.sum.Q4}
\alias{rotdist.sum.SO3}
\title{Sample distance}
\usage{
  rotdist.sum(x, S = genR(0, space = class(x)),
    method = "extrinsic", p = 1)

  \method{rotdist.sum}{SO3} (x, S = id.SO3,
    method = "extrinsic", p = 1)

  \method{rotdist.sum}{Q4} (x, S = id.Q4,
    method = "extrinsic", p = 1)
}
\arguments{
  \item{x}{\eqn{n\times p}{n-by-p} matrix where each row
  corresponds to a random rotation in matrix (\eqn{p=9}) or
  quaternion (\eqn{p=4}) form.}

  \item{S}{the individual matrix of interest, usually an
  estimate of the mean.}

  \item{method}{type of distance used method in "extrinsic"
  or "intrinsic"}

  \item{p}{the order of the distances to compute.}
}
\value{
  The sum of the pth order distance between each row of x
  and S.
}
\description{
  Compute the sum of the \eqn{p^{th}}{pth} order distances
  between each row of x and S.
}
\examples{
Rs <- ruars(20, rvmises, kappa = 10)

SE1 <- median(Rs)                      #Projected median
SE2 <- mean(Rs)                        #Projected mean
SR2 <- mean(Rs, type = "geometric")    #Geometric mean

#I will use "rotdist.sum" to verify these three estimators minimize the
#loss function they are designed to minimize relative to the other esimators.
#All of the following statements should evaluate to "TRUE"

#The projected mean minimizes the sum of squared Euclidean distances
rotdist.sum(Rs, S = SE2, p = 2) < rotdist.sum(Rs, S = SE1, p = 2)
rotdist.sum(Rs, S = SE2, p = 2) < rotdist.sum(Rs, S = SR2, p = 2)

#The projected median minimizes the sum of first order Euclidean distances
rotdist.sum(Rs, S = SE1, p = 1) < rotdist.sum(Rs, S = SE2, p = 1)
rotdist.sum(Rs, S = SE1, p = 1) < rotdist.sum(Rs, S = SR2, p = 1)

#The geometric mean minimizes the sum of squared Riemannian distances
rotdist.sum(Rs, S = SR2, p = 2, method = "intrinsic") <
                 rotdist.sum(Rs, S = SE1, p = 2, method = "intrinsic")
rotdist.sum(Rs, S = SR2, p = 2, method = "intrinsic") <
                 rotdist.sum(Rs, S = SE2, p = 2, method = "intrinsic")
}
\seealso{
  \code{\link{rot.dist}}
}

