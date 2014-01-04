\name{skew.exp}
\alias{skew.exp}
\title{Matrix exponential}
\usage{
  skew.exp(x)
}
\arguments{
  \item{x}{single \eqn{3\times 3}{3-by-3} skew-symmetric
  matrix or \eqn{n\times 9}{n-by-9} sample of
  skew-symmetric matrices.}
}
\value{
  Matrix \eqn{e^{\bm H}}{e^H} in \eqn{SO(3)} .
}
\description{
  Compute the matrix exponential for skew-symmetric
  matrices according to the usual Taylor expansion. The
  expansion is significantly simplified for skew-symmetric
  matrices, see \cite{Moakher (2002)}. Maps a matrix
  belonging to the lie algebra \eqn{so(3)} into the lie
  group \eqn{SO(3)}.
}
\references{
  Moakher M (2002). "Means and averaging in the group of
  rotations." _SIAM Journal on Matrix Analysis and
  Applications_, *24*(1), pp. 1-16.
}
