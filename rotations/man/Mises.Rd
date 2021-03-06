\name{Mises}
\alias{dvmises}
\alias{Mises}
\alias{pvmises}
\alias{rvmises}
\title{The circular-von Mises distribution}
\usage{
  dvmises(r, kappa = 1, nu = NULL, Haar = TRUE)

  pvmises(q, kappa = 1, nu = NULL, lower.tail = TRUE)

  rvmises(n, kappa = 1, nu = NULL)
}
\arguments{
  \item{r,q}{vector of quantiles}

  \item{n}{number of observations.  If \code{length(n)>1},
  the length is taken to be the number required.}

  \item{kappa}{concentration parameter.}

  \item{nu}{circular variance, can be used in place of
  \code{kappa}.}

  \item{Haar}{logical; if TRUE density is evaluated with
  respect to the Haar measure.}

  \item{lower.tail}{logical; if TRUE (default),
  probabilities are \eqn{P(X \le x)} otherwise, \eqn{P(X >
  x)}.}
}
\value{
  \item{dvmises}{gives the density} \item{pvmises}{gives
  the distribution function} \item{rvmises}{generates
  random deviates}
}
\description{
  Density, distribution function and random generation for
  the circular-von Mises distribution with concentration
  \code{kappa} \eqn{\kappa}.
}
\details{
  The circular von Mises distribution with concentration
  \eqn{\kappa} has density
  \deqn{C_\mathrm{M}(r|\kappa)=\frac{1}{2\pi
  \mathrm{I_0}(\kappa)}e^{\kappa
  cos(r)}.}{C(r|\kappa)=exp[\kappa cos(r)]/[2\pi
  I(\kappa)]} where \eqn{\mathrm{I_0}(\kappa)}{I(\kappa)}
  is the modified Bessel function of order 0.
}
\examples{
r <- seq(-pi, pi, length = 500)

#Visualize the von Mises density fucntion with respect to the Haar measure
plot(r, dvmises(r, kappa = 10), type = "l", ylab = "f(r)", ylim = c(0, 100))

#Visualize the von Mises density fucntion with respect to the Lebesgue measure
plot(r, dvmises(r, kappa = 10, Haar = FALSE), type = "l", ylab = "f(r)")

#Plot the von Mises CDF
plot(r,pvmises(r,kappa = 10), type = "l", ylab = "F(r)")

#Generate random observations from von Mises distribution
rs <- rvmises(20, kappa = 1)
hist(rs, breaks = 10)
}
\seealso{
  \link{Angular-distributions} for other distributions in
  the rotations package.
}

