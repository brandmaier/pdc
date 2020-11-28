udConvert <- function(x)  { ifelse(sign(diff(x))==1,1,0)  }

udCodeword <- function(x, m) {sum( 2^(1:(m-1)-1) * udConvert(x) )+1}

udComplexity <- function(x, compression.type="zip") {
  return(length(memCompress(paste0(udConvert(x),collapse = "")), 
                type=compression.type)/length(x))
}

udcDist <- function(X, compression.type="zip") {

  if (length(dim(X)) == 2) { 

    baseline.correction <- length(memCompress("0",type=compression.type))-1
    
    XX <- apply(X,2, udConvert )
    
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
        zx <- comp.lengths[i]-baseline.correction
        zy <- comp.lengths[j]-baseline.correction
        zxy <- length(comp)-baseline.correction
        mt[i,j]<-mt[j,i]<- 
           (zxy-min(zx,zy))/max(zx,zy)  
        
      }
    }
    
    return(mt)
    
  } else {
    
    stop("Not implemented yet.")
    
  }
  
}

udCodebook <- function(x) {
  udConvert(x)
}