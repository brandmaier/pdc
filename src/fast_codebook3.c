#include <R.h>
#include <Rdefines.h>
    
SEXP fast_codebook3(SEXP sexp_x, SEXP sexp_t) {
    
    // convert the generic SEXP type to a vector of doubles
    PROTECT(sexp_x = AS_NUMERIC(sexp_x));
    // ...and get a pointer to it
    double* x = NUMERIC_POINTER(sexp_x);
    int n = length(sexp_x);
    // get time delay
    sexp_t = coerceVector(sexp_t, INTSXP);
    int t = INTEGER_VALUE(sexp_t);
    
    //printf("Embedding is %i",m);
    //printf("length of x is %i", n);
    // release data structure
    
    // prepare result
    int m = 3;
    int d_length = 6;
    SEXP retValue;
    PROTECT(retValue = NEW_INTEGER(d_length));
    for (int i=0; i < d_length; i++) {
    INTEGER(retValue)[i] = 0;
    }
    
    
    int to = n-t*(m-1);
    for (int i=0; i < to; i++)   
    {
    
    int j;
    if(x[i+2*t]<x[i+0*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){j=0;}else{j=1;}}else{j=2;}}else{if(x[i+1*t]<x[i+0*t]){j=3;}else{if(x[i+2*t]<x[i+1*t]){j=4;}else{j=5;}}}
                                                                        
    INTEGER(retValue)[j] += 1;
                                                                        
    }
                                                                        
    // --
                                                                        
      UNPROTECT(2);
                                                                        
                                                                        
     return(retValue);
                                                                        
    }
                                                                        