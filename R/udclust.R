udclust <-
  function(X, clustering.method="complete") 
  {
    D <- udcDist(X)
    
    D <- as.dist(D)
    
    # start hierarchical clustering
    if (clustering.method == "complete") {
      hcl <- hclust(D, method="complete")
    } else if (clustering.method == "average") {
      hcl <- hclust(D, method="average")
    }  else if (clustering.method == "single") {
      hcl <- hclust(D, method="single")
    } else {
      stop("Invalid clustering method!")
    }
    
    hcl$N <- length(hcl$order)
    hcl$data <- X
    hcl$D <- D
    hcl$multichannel <- length(dim(X))==3
    hcl$labels <- colnames(X)
    
    # wrap hclust result
    class(hcl) <- c("pdclust","hclust")
    
    return(hcl)
  }