

convert.matrix <-
function(X, m, td)
{
	warning("Use of convert.matrix is deprecated!");
	return(convertMatrix(X,m,td))
}

convertMatrix <-
function(X, m, td)
{
	return( t(apply(X,2,codebook,m=m, t=td)) )
}
