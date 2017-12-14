\name{star.shapes}
\docType{data}
\alias{star.shapes}
\alias{star.shapes.raw}
\title{Shape Signatures of Stars}
\description{
  This data set provides exemplary shape signatures of 
  Column names are coded 'X-Y-Z' with X indicating the
  number of points (4 = 4-point-star or 5 = 5-point-star), Y indicating the
  size (0=100\%, 1=150\%), Z indicating rotation (0=0 degree, 1=45 degree).
}
\usage{
data(star.shapes)

data(star.shapes.raw)
}
\format{
\code{star.shapes} is a matrix containing 100 rows and 8 columns obtained from \code{traceImage}.
\code{star.shapes.raw} contains a list of three-dimensional matrices containing the raw images and an array of corresponding labels.}

\references{
Brandmaier, A. M. (2015). pdc: An R Package for Complexity-Based Clustering
of Time Series. \emph{Journal of Statistical Software, 67(5)}, 1--23.
}
\author{
Andreas Brandmaier \email{brandmaier@mpib-berlin.mpg.de}}
\keyword{datasets}