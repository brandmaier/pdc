#include <R.h>
#include <Rdefines.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct struct_pair {
  int index;
  double value;
} pair;


int sort(const void *x, const void *y) {
//  printf(" Comparing %f and %f\n ",   (*(pair*)x).value , (*(pair*)y).value);
  double diff = (*(pair*)x).value - (*(pair*)y).value ; 
  if (diff > 0) { return +1; }
   else if (diff < 0) {return -1;}
   else {return 0;}
  }

int facs[] =  {0,1,2,6,24,120,720,5040,40320,362880,3628800,39916800, 479001600};

int fac(int x)
{
  if (x <= 13) {
    return facs[x];
  } else {
    return fac(x-1);
  }
}


    
SEXP fast_codebookX(SEXP sexp_x, SEXP sexp_t, SEXP sexp_m) {
    
    // convert the generic SEXP type to a vector of doubles
    PROTECT(sexp_x = AS_NUMERIC(sexp_x));
    // ...and get a pointer to it
    double* x = NUMERIC_POINTER(sexp_x);
    int n = length(sexp_x);
    // get time delay
    sexp_t = coerceVector(sexp_t, INTSXP);
    int t = INTEGER_VALUE(sexp_t);
    // get embedding
    sexp_m = coerceVector(sexp_m, INTSXP);
    int m = INTEGER_VALUE(sexp_m);
    
    
    //printf("Embedding is %i",m);
    //printf("length of x is %i", n);
    // release data structure
    
    // prepare result
    int d_length = fac(m);
    SEXP retValue;
    PROTECT(retValue = NEW_INTEGER(d_length));
    for (int i=0; i < d_length; i++) {
    INTEGER(retValue)[i] = 0;
    }

    pair array[m];   
        
    int to = n-t*(m-1);
    for (int i=0; i < to; i++)   
    {
    
    // fill vector
    int k,j,l;
    for (l=0; l < m; l++)
    {
       array[l].index = l;
       array[l].value = x[i+l*t];
    }

    // determine permutation
    qsort(array,m,sizeof(pair), sort);

/*
    for (l=0; l < m; l++)
    {
      printf("%f => %i ",array[l].value,array[l].index);
    }
    printf("\n*\n");
*/

    int sorted[m];
    for (l=0; l < m; l++) {
     sorted[l] = l;
    }
    
    int result = 0;
    for (k=0; k < m;k++)
    {
    // printf(" - Adding %i*%i\n", sorted[array[k].index],fac(m-k-1));
      result+=(sorted[array[k].index]) * fac(m-k-1);
      for (j=array[k].index; j < m; j++) sorted[j] -= 1;
    }
    
    
   //printf("Permutation idx %i \n",result);    
    // --

    INTEGER(retValue)[result] += 1;
                                                                        
    }
                                                                        
    // --
                                                                        
      UNPROTECT(2);
                                                                        
                                                                        
     return(retValue);
                                                                        
    }
                                                                        