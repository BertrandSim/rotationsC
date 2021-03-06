\name{log.SO3}
\alias{log.SO3}
\title{Rotation logarithm}
\usage{
  \method{log}{SO3} (x, ...)
}
\arguments{
  \item{x}{\eqn{n\times 9}{n-by-9} matrix where each row
  corresponds to a random rotation matrix.}

  \item{...}{additional arguments.}
}
\value{
  Skew symmetric matrix \eqn{\log(R)}{log(R)}.
}
\description{
  Compute the logarithm of a rotation matrix, which results
  in a \eqn{3\times 3}{3-by-3} skew-symmetric matrix.  This
  function maps the lie group \eqn{SO(3)} into its tangent
  space, which is the space of all \eqn{3\times 3}{3-by-3}
  skew symmetric matrices, the lie algebra \eqn{so(3)}.
  For details see e.g. \cite{Moakher (2002)}.
}
\examples{
Rs <- ruars(20, rcayley)

#Here we demonstrate how the logarithm can be used to determine the angle and
#axis corresponding to the provided sample

lRs <- log(Rs)               #Take the logarithm of the sample
Ws <- lRs[,c(6, 7, 2)]       #The appropriate diagonal entries are the axis*angle
lens <- sqrt(rowSums(Ws^2))
axes <- mis.axis(Rs)
angs <- mis.angle(Rs)
all.equal(axes, Ws/lens)
all.equal(angs, lens)
}
\references{
  Moakher M (2002). "Means and averaging in the group of
  rotations." SIAM Journal on Matrix Analysis and
  Applications, 24(1), pp. 1-16.
}

