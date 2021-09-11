codebook.entropy <-
function(data, m, t, normalize_by_observed=FALSE)
{

	ent <- entropy(codebook(data, m, t),normalize_by_observed=normalize_by_observed)
	
	return( ent);
}
