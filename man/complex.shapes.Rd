\name{complex.shapes}
\docType{data}
\alias{complex.shapes}
\alias{complex.shapes.raw}
\title{Shape Signatures of Fish, Glasses, and Bottles}
\description{
  This data set provides exemplary shape signatures of each five
  fish,  bottles, and pairs of glasses. The planar shapes were
  derived from original artwork obtained from \url{openclipart.org}.
  Column names encode the type of image.
}
\usage{

data(complex.shapes)

data(complex.shapes.raw)
}

\format{
\code{complex.shapes} is a matrix containing 100 rows and 15 columns obtained from \code{trace.image}. 
\code{complex.shapes.raw} contains a list containing 15 three-dimensional matrices and an array of corresponding labels.
}
\references{
Brandmaier, A. M. (2015). pdc: An R Package for Complexity-Based Clustering
of Time Series. \emph{Journal of Statistical Software, 67(5)}, 1--23.
}
\author{
Andreas Brandmaier \email{brandmaier@mpib-berlin.mpg.de}}
\keyword{datasets}