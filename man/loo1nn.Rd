\name{loo1nn}
\alias{loo1nn}
\title{
Leave-one-out One-nearest-neighbor Evaluation
}
\description{
Evaluates a clustering distance matrix within a supervised learning
scheme: leave-one-out one-neares-neighbor cross-validation.
This yields a rough estimate of the suitabilty of a distance function
for discriminating between classes if ground-truth is known.
}
\usage{
loo1nn(x, y)
}
\arguments{
  \item{x}{A \code{pdclust} object.}
  \item{y}{
A vector of the true class labels.
}
}
\value{
Returns a percentage-correct estimate.
}
\references{
Brandmaier, A. M. (2015). pdc: An R Package for Complexity-Based Clustering
of Time Series. \emph{Journal of Statistical Software, 67(5)}, 1--23.
}
\author{
Andreas Brandmaier \email{brandmaier@mpib-berlin.mpg.de}}

\seealso{
\code{\link{pdc.dist}}
\code{\link{pdclust}}
}
