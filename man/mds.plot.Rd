\name{mdsPlot}
\alias{mds.plot}
\alias{mdsPlot}

\title{Multidimensional Scaling Plot}

\description{Plots a two-dimensional projection to the principal coordinates of all observations. Clusters are shown as polygonal convex hulls of their members.}

\usage{
	mdsPlot (X, labels = NULL, col = "gray") 
}

\arguments{
	\item{X}{A \code{\link{pdclust}} object.} 
	\item{labels}{Optional. A vector of labels for the observations. If NULL, column names of the dataset are used.}
	\item{col}{A vector of colors for polygon shading.}
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
data("complex.shapes")
truth <- c(rep("fish",5),rep("bottle",4),rep("glasses",5))
clust <- pdclust(complex.shapes, t=5)
mdsPlot(clust, truth, col=c("lightblue","lightgreen","lightgray"))
}