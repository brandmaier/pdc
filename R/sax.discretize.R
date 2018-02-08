# requires scaled() x
sax.discretize <- function(x, alphabet.size=4) 
{
  if (!is.null(dim(x)) & length(dim(x))==2) {
    return(apply(X=x,FUN=sax.discretize,MARGIN = 2,alphabet.size=alphabet.size))
  }
  
  
  breakpoints <- qnorm(((1:(alphabet.size+1)-1))/(alphabet.size))
  
  discrete.x <- sapply(X = x, FUN=function(x){min(which(x < breakpoints))-1})
  
  return(discrete.x)
}