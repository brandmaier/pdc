\name{pdcDist}
\alias{pdc.dist}
\alias{pdcDist}
\title{
Permutation Distribution Clustering Distance Matrix
}
\description{
This function computes and returns the distance matrix computed by the divergence between permutation distributions of time series.
}
\usage{
pdcDist(X, m = NULL, t = NULL, divergence = symmetricAlphaDivergence)
}
\arguments{
  \item{X}{
A matrix representing a set of time series. Columns are time series and rows represent time points.

}
  \item{m}{
Embedding dimension for calculating the permutation distributions. 
Reasonable values range usually somewhere between 2 and 10. If no embedding dimension is chosen, the MinE heuristic is used to determine the embedding dimension automatically.

}
\item{t}{Time-delay of the embedding}
  \item{divergence}{
Divergence measure between discrete distributions. Default is the symmetric alpha divergence.

}
}
\details{
A valid divergence is always non-negative.
}
\value{
Returns the dissimilarity between two codebooks as floating point number (larger or equal than zero).
}

\references{
Brandmaier, A. M. (2015). pdc: An R Package for Complexity-Based Clustering
of Time Series. \emph{Journal of Statistical Software, 67(5)}, 1--23.
}
\author{
Andreas Brandmaier \email{brandmaier@mpib-berlin.mpg.de}}

\seealso{
\code{\link{pdclust}}

\code{\link{hclust}}
\code{\link{kmeans}}

}
\examples{

# create a set of time series consisting
# of sine waves with different degrees of added noise
# and two white noise time series
X <- cbind(
sin(1:500)+rnorm(500,0,.1),
sin(1:500)+rnorm(500,0,.2),
sin(1:500)+rnorm(500,0,.3),
sin(1:500)+rnorm(500,0,.4),
rnorm(500,0,1),
rnorm(500,0,1)
)

# calculate the distance matrix
D <- pdcDist(X,3)

# and plot with lattice package, you will
# be able to spot two clusters: a noise cluster
# and a sine wave cluster
require("lattice")
levelplot(as.matrix(D), col.regions=grey.colors(100,start=0.9, end=0.3))


}
