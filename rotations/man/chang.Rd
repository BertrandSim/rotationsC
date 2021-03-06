\name{chang}
\alias{chang}
\alias{chang.Q4}
\alias{chang.SO3}
\title{M-estimator asymptotic confidence region}
\usage{
  chang(x, estimator, alp)

  \method{chang}{SO3} (x, estimator, alp = NULL)

  \method{chang}{Q4} (x, estimator, alp = NULL)
}
\arguments{
  \item{x}{\eqn{n\times p}{n-by-p} matrix where each row
  corresponds to a random rotation in matrix (\eqn{p=9}) or
  quaternion (\eqn{p=4}) form.}

  \item{estimator}{character string either "mean" or
  "median."}

  \item{alp}{alpha level desired, e.g. 0.05 or 0.10.}
}
\value{
  Radius of the confidence region centered at the specified
  estimator.
}
\description{
  Compute the radius of a \eqn{100(1-\alpha)}\% confidence
  region for the central orientation based on M-estimation
  theory.
}
\details{
  Compute the radius of a \eqn{100(1-\alpha)}\% confidence
  region for the central orientation centered at the
  projected mean or median based on a result due to
  \cite{Chang et al. (2001)} among others.  By construction
  each axis will have the same radius so the radius
  reported is for all three axes.  This method is called
  "direct" because it uses M-estimation theory for SO(3)
  directly instead of relying on the transformation of a
  result from directional statistics like
  \code{\link{prentice}} and \code{\link{fisheretal}} do.
}
\examples{
Rs <- ruars(20, rcayley, kappa = 100)

#The chang method can be accesed from the "region" function or the "chang" function
region(Rs, method = "direct", type = "asymptotic", alp = 0.1, estimator = "mean")
chang(Rs, estimator = "mean", alp = 0.1)
}
\references{
  Chang T and Rivest L (2001). "M-estimation for location
  and regression parameters in group models: A case study
  using Stiefel manifolds." Annals of statistics,
  29(3), pp. 784-814.
}
\seealso{
  \code{\link{bayesCR}}, \code{\link{prentice}},
  \code{\link{fisheretal}}, \code{\link{zhang}}
}

