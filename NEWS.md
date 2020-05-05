# pdc 1.1.0; ongoing

* added udclust() and udcDist() functionality
* added pkgdown
* added travis support

# pdc 1.0.3; 28.09.2015

* updated citation file and citation in docs
* updated package's global imports to new CRAN policy

# pdc 1.0.2; 11.11.2014

* bugfixes for resetting par() after plotting (plot.pdclust and rasterPlot)
* removed dev.new() from rasterPlot
* fixed dataset "star.shapes.raw", which erroneously contained wrong images
* updated citation information in docs

# pdc 1.0.1;	10.11.2014	

* calls to pdcDist with default arguments do not produce a warning anymore

# pdc 1.0;	16.10.2014

* changed all function calls to camelcase naming convention, e.g., pdcDist() instead of pdc.dist().
* pdclust objects inherit hclust class
* fixed some problems with par() settings in plot()
* added a tests directory
* added rasterPlot for plotting results of shape clustering
* added raw image data for complex.shape and star.shape data
* changed print() of entropy heuristic object to sumamry() and added a new print() method
* added proper NAMESPACE for S3 methods
* added invisible() returns to prints and plots
* various minor bugfixes

# pdc 0.5;	13.02.2014

- added mds.plot() for multidimensional scaling including convex hulls of clusters
- added string representation of pdclust dendrogram using str()
- print() shows time-delay
- added capability to plot p values for hypothesis tests on branch splits
- added compatibility of loo1nn() with dissimilarity matrices

# pdc 0.4;   04.02.2014

- added hellinger distance, squared hellinger distance, and symmetric alpha divergence
- added shape signature tracer
- added example datasets for shape signatures: complex.shapes and star.shapes
- moved dependence of package lattice to suggestions

# pdc V0.3;	15.05.2012

- drastic speed-up with fast C-implementation of codebook()
- added support for multi-channel time-series

# pdc 0.2; 	19.04.2012

- implemented time-delayed embedding
- drastic speed-up of codeword()-function
- added function loo1nn()

# pdc 0.1;	19.03.2012

* initial submission to CRAN
