library("TSclust")
data("paired.tseries", package = "TSclust")
truth <- rep(1:18, each = 2)
mine <- entropyHeuristic(paired.tseries,t.max = 10)
clust <- pdclust(paired.tseries,t=1)
plot(clust, cols=truth)

# use PAA algorithm

paa.paired.tseries <- paa.transform(paired.tseries,string.length = 500)
sax.paired.tseries <- sax.discretize(paired.tseries,alphabet.size = 12)
clust <- pdclust(sax.paired.tseries)
plot(clust,cols = truth)