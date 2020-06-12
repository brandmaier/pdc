pdc
===

[![cran
version](http://www.r-pkg.org/badges/version/pdc)](https://cran.r-project.org/package=pdc)
[![rstudio mirror
downloads](http://cranlogs.r-pkg.org/badges/pdc)](https://github.com/metacran/cranlogs.app)
[![Lifecycle:
stable](https://img.shields.io/badge/lifecycle-stable-brightgreen.svg)](https://www.tidyverse.org/lifecycle/#stable)
<!-- badges: start --> [![Travis build
status](https://travis-ci.com/brandmaier/pdc.svg?branch=master)](https://travis-ci.com/brandmaier/pdc)
<!-- badges: end -->

What is this?
-------------

“Permutation distribution clustering is a complexity-based approach to
clustering time series. The dissimilarity of time series is formalized
as the squared Hellinger distance between the permutation distribution
of embedded time series. The resulting distance measure has linear time
complexity, is invariant to phase and monotonic transformations, and
robust to outliers.” (Brandmaier et al., 2015)

PDC was cited in the context of modeling the predictability of
infectious disease outbreaks, clustering of river stream flows,
volatility of financial markets, in a decision support systems for
agriculture and farming, in investigating Antarctic cryoconite holes.

Install
-------

To install the packagr from CRAN, simply type

    install.packages("pdc")

To install the latest pdc package directly from this repository, copy
the following line into R:

    library(devtools)
    devtools::install_github("brandmaier/pdc")

Documentation
-------------

Please see the online package documentation here:
<https://brandmaier.github.io/pdc/>.

References
----------

Brandmaier, A. M. (2015). pdc: An R package for complexity-based
clustering of time series. *Journal of Statistical Software*, 67.
<a href="doi:10.18637/jss.v067.i05" class="uri">doi:10.18637/jss.v067.i05</a>
