#include <R.h>
#include <Rdefines.h>
    
SEXP fast_codebook5(SEXP sexp_x, SEXP sexp_t) {
    
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
    int m = 5;
    int d_length = 120;
    SEXP retValue;
    PROTECT(retValue = NEW_INTEGER(d_length));
    for (int i=0; i < d_length; i++) {
    INTEGER(retValue)[i] = 0;
    }
    
    
    int to = n-t*(m-1);
    for (int i=0; i < to; i++)   
    {
    
    int j;
    if(x[i+4*t]<x[i+0*t]){if(x[i+3*t]<x[i+0*t]){if(x[i+4*t]<x[i+1*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=0;}else{j=1;}}else{j=2;}}else{if(x[i+4*t]<x[i+3*t]){j=3;}else{j=4;}}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=5;}else{j=6;}}else{j=7;}}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){j=8;}else{if(x[i+4*t]<x[i+3*t]){j=9;}else{j=10;}}}else{if(x[i+3*t]<x[i+2*t]){j=11;}else{if(x[i+4*t]<x[i+3*t]){j=12;}else{j=13;}}}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+2*t]<x[i+1*t]){j=14;}else{if(x[i+3*t]<x[i+2*t]){j=15;}else{j=16;}}}else{j=17;}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+4*t]<x[i+3*t]){j=18;}else{j=19;}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=20;}else{j=21;}}else{if(x[i+4*t]<x[i+3*t]){j=22;}else{j=23;}}}}else{j=24;}}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){j=25;}else{if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){j=26;}else{j=27;}}else{j=28;}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=29;}else{j=30;}}else{j=31;}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=32;}else{j=33;}}else{if(x[i+3*t]<x[i+2*t]){j=34;}else{if(x[i+4*t]<x[i+3*t]){j=35;}else{j=36;}}}}}}else{if(x[i+3*t]<x[i+1*t]){j=37;}else{if(x[i+4*t]<x[i+3*t]){j=38;}else{j=39;}}}}}else{if(x[i+4*t]<x[i+1*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){j=40;}else{j=41;}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){j=42;}else{j=43;}}else{j=44;}}else{if(x[i+1*t]<x[i+0*t]){j=45;}else{j=46;}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){j=47;}else{j=48;}}else{j=49;}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){j=50;}else{j=51;}}else{if(x[i+2*t]<x[i+1*t]){j=52;}else{if(x[i+3*t]<x[i+2*t]){j=53;}else{j=54;}}}}}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+4*t]<x[i+2*t]){j=55;}else{if(x[i+2*t]<x[i+1*t]){j=56;}else{j=57;}}}else{if(x[i+3*t]<x[i+2*t]){j=58;}else{j=59;}}}}}else{if(x[i+3*t]<x[i+0*t]){if(x[i+4*t]<x[i+1*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){j=60;}else{j=61;}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+2*t]<x[i+1*t]){j=62;}else{j=63;}}else{j=64;}}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){j=65;}else{j=66;}}else{j=67;}}else{if(x[i+3*t]<x[i+2*t]){j=68;}else{j=69;}}}else{if(x[i+2*t]<x[i+1*t]){j=70;}else{if(x[i+3*t]<x[i+2*t]){j=71;}else{j=72;}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+1*t]<x[i+0*t]){j=73;}else{j=74;}}else{if(x[i+1*t]<x[i+0*t]){j=75;}else{if(x[i+2*t]<x[i+1*t]){j=76;}else{j=77;}}}}else{if(x[i+4*t]<x[i+2*t]){j=78;}else{j=79;}}}}}else{if(x[i+4*t]<x[i+1*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=80;}else{j=81;}}else{j=82;}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=83;}else{j=84;}}else{j=85;}}else{if(x[i+4*t]<x[i+3*t]){j=86;}else{j=87;}}}else{if(x[i+3*t]<x[i+2*t]){j=88;}else{if(x[i+4*t]<x[i+3*t]){j=89;}else{j=90;}}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+2*t]<x[i+1*t]){j=91;}else{if(x[i+3*t]<x[i+2*t]){j=92;}else{j=93;}}}else{j=94;}}}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){j=95;}else{if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=96;}else{j=97;}}else{if(x[i+4*t]<x[i+3*t]){j=98;}else{j=99;}}}else{if(x[i+4*t]<x[i+3*t]){j=100;}else{j=101;}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){j=102;}else{if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){j=103;}else{j=104;}}else{j=105;}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=106;}else{j=107;}}else{j=108;}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=109;}else{j=110;}}else{j=111;}}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){j=112;}else{if(x[i+4*t]<x[i+3*t]){j=113;}else{j=114;}}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=115;}else{j=116;}}else{if(x[i+3*t]<x[i+2*t]){j=117;}else{if(x[i+4*t]<x[i+3*t]){j=118;}else{j=119;}}}}}}}}}}
                                                                        
    INTEGER(retValue)[j] += 1;
                                                                        
    }
                                                                        
    // --
                                                                        
      UNPROTECT(2);
                                                                        
                                                                        
     return(retValue);
                                                                        
    }
                                                                        