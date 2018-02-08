# piece-wise aggregate approximation

paa.transform <- function(ts, string.length=NULL, scale=TRUE){
  
  if (!is.null(dim(ts)) & length(dim(ts))==2) {
    return(apply(X=ts,FUN=paa.transform,MARGIN = 2,string.length=string.length))
  }
  
  len <- length(ts)
  
  if (is.null(string.length)) {
    string.length <- len/10
  }
  
  
  ts <- scale(ts, center = TRUE, scale = TRUE)
 
  if (len == string.length) {
    return(ts)
  }
  else {
    if (len %% string.length == 0) {
      colMeans(matrix(ts, nrow=len %/% string.length, byrow=F))
    }
    else {
      result = rep.int(0, string.length)
      for (i in 0:(len * string.length - 1)) {
        index <- i %/% len + 1
        position <- i %/% string.length + 1 
        result[index] <- result[index] + ts[position]
      }
      for (i in 1:string.length) {
        result[i] <- result[i] / len
      }
      return(result)
    }
  }
}