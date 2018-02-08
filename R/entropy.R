entropy <-
function(dist)
{
	dist <- dist[dist!=0]
	if (length(dist)==1) return (0);
	return(-sum(dist*log(dist))/log(length(dist)));
	
}
