\name{codebook}
\alias{codebook}
\title{
Codebook
}
\description{
A codebook contains the permutation distribution of a time series.
}
\usage{
codebook(x, m = 3, t = 1, use.fast=T, normalized = T)
}
\arguments{
  \item{x}{
	a vector ot a time series
}
  \item{m}{
The embedding dimension.
}
\item{t}{Time-delay of the embedding.}

\item{use.fast}{Use a fast C-implementation if possible.}

\item{normalized}{Normalize codebook such that it is a probability distribution.}
}
\details{
The length of a codebook is the factorial of the embedding dimension. The elements of the
codebook represent relative frequencies of codewords of size m.
}
\value{
Returns a vector of relative frequencies.
}

\references{
Brandmaier, A. M. (2015). pdc: An R Package for Complexity-Based Clustering
of Time Series. \emph{Journal of Statistical Software, 67(5)}, 1--23.
}
\author{
Andreas Brandmaier \email{brandmaier@mpib-berlin.mpg.de}}

\seealso{
\code{\link{pdclust}}
}
\examples{

# calculate codebook from sine-wave
cb <- codebook(c(sin(1:100)),m=3)

# plot the permutation distribution
barplot(cb,xlab="Permutation Distribution")

}

