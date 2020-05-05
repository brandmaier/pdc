udConvert <- function(x) {function(x) { ifelse(sign(diff(x))==1,1,0)  }}

udcDist <- function(X, compression.type="xz") {

  if (length(dim(X)) == 2) { 

    XX <- apply(X,2, udConvert()) 
    
    l <- dim(XX)[2]
    mt <- matrix(rep(0,l*l),l,)
    
    comp.lengths <- rep(NA, l)
    for (i in 1:l) {
      comp<-
        memCompress(from=paste0(XX[,i],collapse=""),type=compression.type)
      comp.lengths[i] <- length(comp)
    }
    
    for (i in 1:l) {
      for (j in i:l) {
        if (i==j) next;
        
        comp<-memCompress(from=
                      paste0(XX[,i],XX[,j],collapse=""),type=compression.type)
        zx <- comp.lengths[i]
        zy <- comp.lengths[j]
        zxy <- length(comp)
        mt[i,j]<-mt[j,i]<- 
           (zxy-min(zx,zy))/max(zx,zy)  
        
      }
    }
    
    return(mt)
    
  } else {
    
    stop("Not implemented yet.")
    
  }
  
}