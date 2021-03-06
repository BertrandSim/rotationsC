\name{gradient.search}
\alias{gradient.search}
\title{Gradient optimization for rotation data}
\usage{
  gradient.search(sample, error, minerr = 1e-05,
    start = mean(sample), theta = NULL)
}
\arguments{
  \item{sample}{sample of rotations.}

  \item{error}{user defined function to observed distance
  between sample and estimate, has to have parameters for
  the sample and the estimate.}

  \item{minerr}{minimal distance to consider for
  convergence.}

  \item{start}{starting value for the estimation.}

  \item{theta}{size of the grid considered.}
}
\value{
  list of \itemize{ \item \code{Shat} estimate of the main
  direction \item \code{iter} number of iterations
  necessary for convergence \item \code{theta} final size
  of the grid \item \code{minerr} error used for
  convergence \item \code{error} numeric value of total
  sample's distance from main direction }
}
\description{
  Gradient based optimization for user defined central
  orientation of a rotation sample.
}
\examples{
# minimize L1 norm:
L1.error <- function(sample, Shat) {
  sum(rot.dist(sample, Shat, method = "intrinsic", p = 1))
}

cayley.sample <- ruars(n = 10, rangle = rcayley, nu = 1, space = 'SO3')
SL1 <- gradient.search(cayley.sample, L1.error, start = id.SO3)

# visually no perceptible difference between median estimates from in-built function and
# gradient based search (for almost all starting values)

\dontrun{
plot(cayley.sample, center=SL1$Shat, show_estimates="all")}
}

