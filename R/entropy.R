entropy <-
function(dist, normalize_by_observed=FALSE)
{
	n <- length(dist)
	dist <- dist[dist!=0]
	if (normalize_by_observed) n <- length(dist)
	if (length(dist)==1) return (0);
	return(-sum(dist*log(dist))/log(n));
	
}
