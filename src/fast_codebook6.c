#include <R.h>
#include <Rdefines.h>
    
SEXP fast_codebook6(SEXP sexp_x, SEXP sexp_t) {
    
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
    int m = 6;
    int d_length = 720;
    SEXP retValue;
    PROTECT(retValue = NEW_INTEGER(d_length));
    for (int i=0; i < d_length; i++) {
    INTEGER(retValue)[i] = 0;
    }
    
    
    int to = n-t*(6-1);
    for (int i=0; i < to; i++)   
    {
    
    int j;
    if(x[i+5*t]<x[i+0*t]){if(x[i+4*t]<x[i+0*t]){if(x[i+5*t]<x[i+1*t]){if(x[i+3*t]<x[i+0*t]){if(x[i+4*t]<x[i+1*t]){if(x[i+5*t]<x[i+2*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=0;}else{j=1;}}else{j=2;}}else{if(x[i+5*t]<x[i+4*t]){j=3;}else{j=4;}}}else{if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=5;}else{j=6;}}else{j=7;}}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=8;}else{j=9;}}else{j=10;}}else{if(x[i+5*t]<x[i+4*t]){j=11;}else{j=12;}}}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=13;}else{if(x[i+5*t]<x[i+4*t]){j=14;}else{j=15;}}}else{if(x[i+4*t]<x[i+3*t]){j=16;}else{if(x[i+5*t]<x[i+4*t]){j=17;}else{j=18;}}}}else{if(x[i+4*t]<x[i+3*t]){j=19;}else{if(x[i+5*t]<x[i+4*t]){j=20;}else{j=21;}}}}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){j=22;}else{if(x[i+4*t]<x[i+3*t]){j=23;}else{j=24;}}}else{if(x[i+3*t]<x[i+2*t]){j=25;}else{if(x[i+4*t]<x[i+3*t]){j=26;}else{j=27;}}}}else{if(x[i+1*t]<x[i+0*t]){j=28;}else{j=29;}}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+5*t]<x[i+4*t]){j=30;}else{j=31;}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=32;}else{j=33;}}else{if(x[i+5*t]<x[i+4*t]){j=34;}else{j=35;}}}}else{j=36;}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=37;}else{j=38;}}else{j=39;}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=40;}else{j=41;}}else{j=42;}}else{if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=43;}else{j=44;}}else{j=45;}}}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+4*t]<x[i+3*t]){j=46;}else{if(x[i+5*t]<x[i+4*t]){j=47;}else{j=48;}}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=49;}else{if(x[i+5*t]<x[i+4*t]){j=50;}else{j=51;}}}else{if(x[i+4*t]<x[i+3*t]){j=52;}else{if(x[i+5*t]<x[i+4*t]){j=53;}else{j=54;}}}}}}else{if(x[i+5*t]<x[i+4*t]){j=55;}else{j=56;}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){j=57;}else{j=58;}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=59;}else{j=60;}}else{j=61;}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=62;}else{j=63;}}else{j=64;}}}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=65;}else{j=66;}}else{j=67;}}else{if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=68;}else{j=69;}}else{j=70;}}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=71;}else{j=72;}}else{if(x[i+4*t]<x[i+3*t]){j=73;}else{if(x[i+5*t]<x[i+4*t]){j=74;}else{j=75;}}}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=76;}else{j=77;}}else{if(x[i+4*t]<x[i+3*t]){j=78;}else{if(x[i+5*t]<x[i+4*t]){j=79;}else{j=80;}}}}}}}else{if(x[i+4*t]<x[i+2*t]){j=81;}else{if(x[i+5*t]<x[i+4*t]){j=82;}else{j=83;}}}}}else{if(x[i+5*t]<x[i+2*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){j=84;}else{j=85;}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){j=86;}else{j=87;}}else{j=88;}}else{if(x[i+2*t]<x[i+1*t]){j=89;}else{j=90;}}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=91;}else{j=92;}}else{j=93;}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=94;}else{j=95;}}else{if(x[i+3*t]<x[i+2*t]){j=96;}else{if(x[i+4*t]<x[i+3*t]){j=97;}else{j=98;}}}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+5*t]<x[i+3*t]){j=99;}else{j=100;}}else{if(x[i+4*t]<x[i+3*t]){j=101;}else{j=102;}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+5*t]<x[i+3*t]){j=103;}else{if(x[i+3*t]<x[i+2*t]){j=104;}else{j=105;}}}else{if(x[i+4*t]<x[i+3*t]){j=106;}else{j=107;}}}}}else{if(x[i+4*t]<x[i+1*t]){if(x[i+5*t]<x[i+2*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=108;}else{j=109;}}else{j=110;}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+5*t]<x[i+4*t]){j=111;}else{j=112;}}else{if(x[i+5*t]<x[i+4*t]){j=113;}else{j=114;}}}else{if(x[i+5*t]<x[i+4*t]){j=115;}else{j=116;}}}else{if(x[i+1*t]<x[i+0*t]){j=117;}else{j=118;}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=119;}else{j=120;}}else{if(x[i+5*t]<x[i+4*t]){j=121;}else{j=122;}}}else{if(x[i+5*t]<x[i+4*t]){j=123;}else{j=124;}}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=125;}else{j=126;}}else{if(x[i+5*t]<x[i+4*t]){j=127;}else{j=128;}}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+5*t]<x[i+4*t]){j=129;}else{j=130;}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=131;}else{j=132;}}else{if(x[i+5*t]<x[i+4*t]){j=133;}else{j=134;}}}}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){j=135;}else{if(x[i+5*t]<x[i+4*t]){j=136;}else{j=137;}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+1*t]<x[i+0*t]){j=138;}else{j=139;}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+5*t]<x[i+4*t]){j=140;}else{j=141;}}else{if(x[i+5*t]<x[i+4*t]){j=142;}else{j=143;}}}}}}else{if(x[i+5*t]<x[i+2*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+4*t]<x[i+2*t]){j=144;}else{if(x[i+2*t]<x[i+1*t]){j=145;}else{j=146;}}}else{if(x[i+3*t]<x[i+2*t]){j=147;}else{j=148;}}}else{j=149;}}}}else{if(x[i+3*t]<x[i+0*t]){if(x[i+4*t]<x[i+1*t]){if(x[i+5*t]<x[i+2*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=150;}else{j=151;}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+3*t]<x[i+2*t]){j=152;}else{j=153;}}else{j=154;}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=155;}else{j=156;}}else{if(x[i+5*t]<x[i+3*t]){j=157;}else{j=158;}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=159;}else{j=160;}}else{j=161;}}else{if(x[i+4*t]<x[i+3*t]){j=162;}else{j=163;}}}else{if(x[i+3*t]<x[i+2*t]){j=164;}else{if(x[i+4*t]<x[i+3*t]){j=165;}else{j=166;}}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+2*t]<x[i+1*t]){j=167;}else{j=168;}}else{if(x[i+2*t]<x[i+1*t]){j=169;}else{if(x[i+3*t]<x[i+2*t]){j=170;}else{j=171;}}}}else{if(x[i+5*t]<x[i+3*t]){j=172;}else{j=173;}}}}}else{if(x[i+5*t]<x[i+2*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=174;}else{j=175;}}else{j=176;}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=177;}else{j=178;}}else{j=179;}}else{if(x[i+5*t]<x[i+4*t]){j=180;}else{j=181;}}}else{if(x[i+4*t]<x[i+3*t]){j=182;}else{if(x[i+5*t]<x[i+4*t]){j=183;}else{j=184;}}}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+3*t]<x[i+2*t]){j=185;}else{if(x[i+4*t]<x[i+3*t]){j=186;}else{j=187;}}}else{j=188;}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+5*t]<x[i+4*t]){j=189;}else{j=190;}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=191;}else{j=192;}}else{j=193;}}else{if(x[i+4*t]<x[i+3*t]){j=194;}else{if(x[i+5*t]<x[i+4*t]){j=195;}else{j=196;}}}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){j=197;}else{if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=198;}else{j=199;}}else{if(x[i+5*t]<x[i+4*t]){j=200;}else{j=201;}}}else{if(x[i+5*t]<x[i+4*t]){j=202;}else{j=203;}}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){j=204;}else{if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=205;}else{j=206;}}else{j=207;}}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=208;}else{j=209;}}else{j=210;}}else{if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=211;}else{j=212;}}else{j=213;}}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=214;}else{if(x[i+5*t]<x[i+4*t]){j=215;}else{j=216;}}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=217;}else{j=218;}}else{if(x[i+4*t]<x[i+3*t]){j=219;}else{if(x[i+5*t]<x[i+4*t]){j=220;}else{j=221;}}}}}}}}}}else{if(x[i+4*t]<x[i+1*t]){if(x[i+5*t]<x[i+2*t]){if(x[i+2*t]<x[i+0*t]){j=222;}else{if(x[i+3*t]<x[i+2*t]){j=223;}else{j=224;}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+2*t]<x[i+1*t]){j=225;}else{j=226;}}else{j=227;}}}else{if(x[i+5*t]<x[i+2*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=228;}else{j=229;}}else{j=230;}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=231;}else{j=232;}}else{if(x[i+5*t]<x[i+4*t]){j=233;}else{j=234;}}}}else{if(x[i+4*t]<x[i+2*t]){j=235;}else{if(x[i+2*t]<x[i+1*t]){if(x[i+5*t]<x[i+4*t]){j=236;}else{j=237;}}else{if(x[i+5*t]<x[i+4*t]){j=238;}else{j=239;}}}}}}}}else{if(x[i+5*t]<x[i+1*t]){if(x[i+3*t]<x[i+0*t]){if(x[i+4*t]<x[i+1*t]){if(x[i+5*t]<x[i+2*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+3*t]<x[i+2*t]){j=240;}else{j=241;}}else{j=242;}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+2*t]<x[i+1*t]){j=243;}else{j=244;}}else{if(x[i+2*t]<x[i+1*t]){j=245;}else{j=246;}}}else{if(x[i+5*t]<x[i+3*t]){j=247;}else{j=248;}}}}else{if(x[i+5*t]<x[i+3*t]){j=249;}else{if(x[i+3*t]<x[i+2*t]){j=250;}else{j=251;}}}}else{if(x[i+5*t]<x[i+2*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){j=252;}else{j=253;}}else{j=254;}}else{if(x[i+3*t]<x[i+2*t]){j=255;}else{j=256;}}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){j=257;}else{j=258;}}else{j=259;}}}else{if(x[i+2*t]<x[i+1*t]){j=260;}else{if(x[i+3*t]<x[i+2*t]){j=261;}else{j=262;}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){j=263;}else{j=264;}}else{if(x[i+1*t]<x[i+0*t]){j=265;}else{j=266;}}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){j=267;}else{if(x[i+2*t]<x[i+1*t]){j=268;}else{j=269;}}}else{if(x[i+1*t]<x[i+0*t]){j=270;}else{if(x[i+2*t]<x[i+1*t]){j=271;}else{j=272;}}}}}else{if(x[i+4*t]<x[i+2*t]){j=273;}else{j=274;}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){j=275;}else{j=276;}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){j=277;}else{j=278;}}else{if(x[i+3*t]<x[i+2*t]){j=279;}else{j=280;}}}}else{j=281;}}}}else{if(x[i+4*t]<x[i+1*t]){if(x[i+5*t]<x[i+2*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=282;}else{j=283;}}else{j=284;}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=285;}else{j=286;}}else{j=287;}}else{if(x[i+4*t]<x[i+3*t]){j=288;}else{j=289;}}}else{if(x[i+3*t]<x[i+2*t]){j=290;}else{if(x[i+4*t]<x[i+3*t]){j=291;}else{j=292;}}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+2*t]<x[i+1*t]){j=293;}else{if(x[i+3*t]<x[i+2*t]){j=294;}else{j=295;}}}else{j=296;}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=297;}else{j=298;}}else{j=299;}}}else{if(x[i+5*t]<x[i+2*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){j=300;}else{if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=301;}else{j=302;}}else{if(x[i+4*t]<x[i+3*t]){j=303;}else{j=304;}}}else{if(x[i+4*t]<x[i+3*t]){j=305;}else{j=306;}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){j=307;}else{if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){j=308;}else{j=309;}}else{j=310;}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=311;}else{j=312;}}else{j=313;}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=314;}else{j=315;}}else{j=316;}}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){j=317;}else{if(x[i+4*t]<x[i+3*t]){j=318;}else{j=319;}}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=320;}else{j=321;}}else{if(x[i+3*t]<x[i+2*t]){j=322;}else{if(x[i+4*t]<x[i+3*t]){j=323;}else{j=324;}}}}}}}}else{if(x[i+3*t]<x[i+1*t]){j=325;}else{if(x[i+1*t]<x[i+0*t]){if(x[i+4*t]<x[i+3*t]){j=326;}else{j=327;}}else{if(x[i+4*t]<x[i+3*t]){j=328;}else{j=329;}}}}}}}else{if(x[i+3*t]<x[i+0*t]){if(x[i+5*t]<x[i+2*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){j=330;}else{if(x[i+5*t]<x[i+3*t]){if(x[i+3*t]<x[i+2*t]){j=331;}else{j=332;}}else{j=333;}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){j=334;}else{j=335;}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){j=336;}else{j=337;}}else{if(x[i+5*t]<x[i+3*t]){j=338;}else{j=339;}}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){j=340;}else{j=341;}}else{j=342;}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+2*t]<x[i+1*t]){j=343;}else{j=344;}}else{if(x[i+2*t]<x[i+1*t]){j=345;}else{if(x[i+3*t]<x[i+2*t]){j=346;}else{j=347;}}}}}}else{if(x[i+5*t]<x[i+2*t]){if(x[i+2*t]<x[i+0*t]){if(x[i+4*t]<x[i+3*t]){j=348;}else{j=349;}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=350;}else{j=351;}}else{j=352;}}else{if(x[i+3*t]<x[i+2*t]){j=353;}else{if(x[i+4*t]<x[i+3*t]){j=354;}else{j=355;}}}}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=356;}else{j=357;}}else{if(x[i+4*t]<x[i+3*t]){j=358;}else{j=359;}}}}}}}else{if(x[i+4*t]<x[i+0*t]){if(x[i+5*t]<x[i+1*t]){if(x[i+3*t]<x[i+0*t]){if(x[i+5*t]<x[i+2*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=360;}else{j=361;}}else{if(x[i+4*t]<x[i+3*t]){j=362;}else{j=363;}}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=364;}else{j=365;}}else{j=366;}}else{if(x[i+3*t]<x[i+2*t]){j=367;}else{if(x[i+4*t]<x[i+3*t]){j=368;}else{j=369;}}}}else{if(x[i+4*t]<x[i+3*t]){j=370;}else{j=371;}}}}else{if(x[i+5*t]<x[i+2*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){j=372;}else{j=373;}}else{j=374;}}else{if(x[i+2*t]<x[i+1*t]){j=375;}else{j=376;}}}else{if(x[i+2*t]<x[i+1*t]){j=377;}else{if(x[i+3*t]<x[i+2*t]){j=378;}else{j=379;}}}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){j=380;}else{j=381;}}else{if(x[i+5*t]<x[i+3*t]){j=382;}else{j=383;}}}else{if(x[i+4*t]<x[i+2*t]){j=384;}else{j=385;}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+5*t]<x[i+3*t]){j=386;}else{if(x[i+3*t]<x[i+2*t]){j=387;}else{j=388;}}}else{j=389;}}}}}else{if(x[i+3*t]<x[i+0*t]){if(x[i+4*t]<x[i+1*t]){if(x[i+5*t]<x[i+2*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+4*t]<x[i+3*t]){j=390;}else{j=391;}}else{if(x[i+4*t]<x[i+3*t]){j=392;}else{j=393;}}}else{j=394;}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=395;}else{j=396;}}else{j=397;}}else{if(x[i+4*t]<x[i+3*t]){j=398;}else{j=399;}}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=400;}else{j=401;}}else{j=402;}}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){j=403;}else{if(x[i+4*t]<x[i+3*t]){j=404;}else{j=405;}}}else{if(x[i+3*t]<x[i+2*t]){j=406;}else{if(x[i+4*t]<x[i+3*t]){j=407;}else{j=408;}}}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+2*t]<x[i+1*t]){j=409;}else{if(x[i+3*t]<x[i+2*t]){j=410;}else{j=411;}}}else{j=412;}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+4*t]<x[i+3*t]){j=413;}else{j=414;}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=415;}else{j=416;}}else{if(x[i+4*t]<x[i+3*t]){j=417;}else{j=418;}}}}else{j=419;}}}}else{if(x[i+5*t]<x[i+2*t]){if(x[i+3*t]<x[i+1*t]){j=420;}else{if(x[i+4*t]<x[i+3*t]){j=421;}else{j=422;}}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){j=423;}else{if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){j=424;}else{j=425;}}else{j=426;}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=427;}else{j=428;}}else{j=429;}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=430;}else{j=431;}}else{if(x[i+3*t]<x[i+2*t]){j=432;}else{if(x[i+4*t]<x[i+3*t]){j=433;}else{j=434;}}}}}}else{if(x[i+3*t]<x[i+1*t]){j=435;}else{if(x[i+4*t]<x[i+3*t]){j=436;}else{j=437;}}}}}}else{if(x[i+4*t]<x[i+1*t]){if(x[i+5*t]<x[i+2*t]){if(x[i+3*t]<x[i+1*t]){j=438;}else{if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){j=439;}else{j=440;}}else{if(x[i+3*t]<x[i+2*t]){j=441;}else{j=442;}}}else{if(x[i+1*t]<x[i+0*t]){j=443;}else{j=444;}}}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){j=445;}else{j=446;}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){j=447;}else{j=448;}}else{j=449;}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){j=450;}else{j=451;}}else{j=452;}}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){j=453;}else{j=454;}}else{if(x[i+1*t]<x[i+0*t]){j=455;}else{j=456;}}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){j=457;}else{j=458;}}else{j=459;}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){j=460;}else{if(x[i+2*t]<x[i+1*t]){j=461;}else{j=462;}}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){j=463;}else{j=464;}}else{if(x[i+2*t]<x[i+1*t]){j=465;}else{if(x[i+3*t]<x[i+2*t]){j=466;}else{j=467;}}}}}}}}else{if(x[i+5*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+3*t]<x[i+2*t]){j=468;}else{j=469;}}else{j=470;}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){j=471;}else{j=472;}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+2*t]<x[i+1*t]){j=473;}else{j=474;}}else{if(x[i+2*t]<x[i+1*t]){j=475;}else{j=476;}}}}else{if(x[i+5*t]<x[i+3*t]){j=477;}else{if(x[i+3*t]<x[i+2*t]){j=478;}else{j=479;}}}}}}}}else{if(x[i+5*t]<x[i+1*t]){if(x[i+3*t]<x[i+0*t]){if(x[i+4*t]<x[i+1*t]){if(x[i+5*t]<x[i+2*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+5*t]<x[i+4*t]){j=480;}else{j=481;}}else{if(x[i+5*t]<x[i+4*t]){j=482;}else{j=483;}}}else{j=484;}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=485;}else{j=486;}}else{if(x[i+5*t]<x[i+4*t]){j=487;}else{j=488;}}}else{if(x[i+4*t]<x[i+2*t]){j=489;}else{if(x[i+5*t]<x[i+4*t]){j=490;}else{j=491;}}}}}else{if(x[i+5*t]<x[i+2*t]){if(x[i+4*t]<x[i+2*t]){j=492;}else{if(x[i+2*t]<x[i+1*t]){j=493;}else{j=494;}}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){j=495;}else{j=496;}}else{j=497;}}}}else{if(x[i+4*t]<x[i+1*t]){if(x[i+5*t]<x[i+2*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=498;}else{j=499;}}else{j=500;}}else{if(x[i+5*t]<x[i+4*t]){j=501;}else{j=502;}}}else{if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=503;}else{j=504;}}else{j=505;}}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=506;}else{if(x[i+5*t]<x[i+4*t]){j=507;}else{j=508;}}}else{if(x[i+4*t]<x[i+3*t]){j=509;}else{if(x[i+5*t]<x[i+4*t]){j=510;}else{j=511;}}}}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+3*t]<x[i+2*t]){j=512;}else{if(x[i+4*t]<x[i+3*t]){j=513;}else{j=514;}}}else{j=515;}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+5*t]<x[i+4*t]){j=516;}else{j=517;}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=518;}else{j=519;}}else{if(x[i+5*t]<x[i+4*t]){j=520;}else{j=521;}}}}else{j=522;}}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=523;}else{j=524;}}else{j=525;}}else{if(x[i+4*t]<x[i+3*t]){j=526;}else{if(x[i+5*t]<x[i+4*t]){j=527;}else{j=528;}}}}else{if(x[i+5*t]<x[i+4*t]){j=529;}else{j=530;}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){j=531;}else{if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=532;}else{j=533;}}else{j=534;}}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=535;}else{j=536;}}else{j=537;}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=538;}else{j=539;}}else{if(x[i+4*t]<x[i+3*t]){j=540;}else{if(x[i+5*t]<x[i+4*t]){j=541;}else{j=542;}}}}}}else{if(x[i+4*t]<x[i+2*t]){j=543;}else{if(x[i+5*t]<x[i+4*t]){j=544;}else{j=545;}}}}}}else{if(x[i+5*t]<x[i+2*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){j=546;}else{j=547;}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){j=548;}else{j=549;}}else{j=550;}}else{if(x[i+2*t]<x[i+1*t]){j=551;}else{j=552;}}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=553;}else{j=554;}}else{j=555;}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=556;}else{j=557;}}else{if(x[i+3*t]<x[i+2*t]){j=558;}else{if(x[i+4*t]<x[i+3*t]){j=559;}else{j=560;}}}}}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+5*t]<x[i+3*t]){j=561;}else{j=562;}}else{if(x[i+4*t]<x[i+3*t]){j=563;}else{j=564;}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+5*t]<x[i+3*t]){j=565;}else{if(x[i+3*t]<x[i+2*t]){j=566;}else{j=567;}}}else{if(x[i+4*t]<x[i+3*t]){j=568;}else{j=569;}}}}}}}else{if(x[i+3*t]<x[i+0*t]){if(x[i+4*t]<x[i+1*t]){if(x[i+5*t]<x[i+2*t]){j=570;}else{if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){j=571;}else{j=572;}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+2*t]<x[i+1*t]){j=573;}else{j=574;}}else{j=575;}}}}else{if(x[i+5*t]<x[i+2*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+5*t]<x[i+4*t]){j=576;}else{j=577;}}else{if(x[i+5*t]<x[i+4*t]){j=578;}else{j=579;}}}else{if(x[i+1*t]<x[i+0*t]){j=580;}else{j=581;}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=582;}else{j=583;}}else{j=584;}}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=585;}else{j=586;}}else{if(x[i+5*t]<x[i+4*t]){j=587;}else{j=588;}}}else{if(x[i+5*t]<x[i+4*t]){j=589;}else{j=590;}}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=591;}else{j=592;}}else{if(x[i+5*t]<x[i+4*t]){j=593;}else{j=594;}}}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+5*t]<x[i+4*t]){j=595;}else{j=596;}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=597;}else{j=598;}}else{if(x[i+5*t]<x[i+4*t]){j=599;}else{j=600;}}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+1*t]<x[i+0*t]){j=601;}else{j=602;}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+5*t]<x[i+4*t]){j=603;}else{j=604;}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+5*t]<x[i+4*t]){j=605;}else{j=606;}}else{if(x[i+5*t]<x[i+4*t]){j=607;}else{j=608;}}}}}else{if(x[i+4*t]<x[i+2*t]){j=609;}else{if(x[i+5*t]<x[i+4*t]){j=610;}else{j=611;}}}}}}}else{if(x[i+4*t]<x[i+1*t]){if(x[i+5*t]<x[i+2*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=612;}else{j=613;}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+3*t]<x[i+2*t]){j=614;}else{j=615;}}else{j=616;}}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=617;}else{j=618;}}else{if(x[i+5*t]<x[i+3*t]){j=619;}else{j=620;}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=621;}else{j=622;}}else{j=623;}}else{if(x[i+4*t]<x[i+3*t]){j=624;}else{j=625;}}}else{if(x[i+3*t]<x[i+2*t]){j=626;}else{if(x[i+4*t]<x[i+3*t]){j=627;}else{j=628;}}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+2*t]<x[i+1*t]){j=629;}else{j=630;}}else{if(x[i+2*t]<x[i+1*t]){j=631;}else{if(x[i+3*t]<x[i+2*t]){j=632;}else{j=633;}}}}else{if(x[i+5*t]<x[i+3*t]){j=634;}else{j=635;}}}}}}else{if(x[i+5*t]<x[i+2*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=636;}else{j=637;}}else{j=638;}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=639;}else{j=640;}}else{j=641;}}else{if(x[i+5*t]<x[i+4*t]){j=642;}else{j=643;}}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=644;}else{j=645;}}else{j=646;}}else{if(x[i+5*t]<x[i+4*t]){j=647;}else{j=648;}}}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+4*t]<x[i+3*t]){j=649;}else{if(x[i+5*t]<x[i+4*t]){j=650;}else{j=651;}}}else{if(x[i+4*t]<x[i+3*t]){j=652;}else{if(x[i+5*t]<x[i+4*t]){j=653;}else{j=654;}}}}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){j=655;}else{if(x[i+4*t]<x[i+3*t]){j=656;}else{j=657;}}}else{if(x[i+3*t]<x[i+2*t]){j=658;}else{if(x[i+4*t]<x[i+3*t]){j=659;}else{j=660;}}}}else{if(x[i+1*t]<x[i+0*t]){j=661;}else{j=662;}}}}}else{if(x[i+2*t]<x[i+0*t]){if(x[i+3*t]<x[i+1*t]){if(x[i+5*t]<x[i+4*t]){j=663;}else{j=664;}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=665;}else{j=666;}}else{j=667;}}else{if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=668;}else{j=669;}}else{j=670;}}}else{if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=671;}else{j=672;}}else{j=673;}}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=674;}else{if(x[i+5*t]<x[i+4*t]){j=675;}else{j=676;}}}else{if(x[i+4*t]<x[i+3*t]){j=677;}else{if(x[i+5*t]<x[i+4*t]){j=678;}else{j=679;}}}}else{if(x[i+4*t]<x[i+3*t]){j=680;}else{if(x[i+5*t]<x[i+4*t]){j=681;}else{j=682;}}}}}}else{if(x[i+3*t]<x[i+1*t]){if(x[i+4*t]<x[i+2*t]){j=683;}else{if(x[i+2*t]<x[i+1*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=684;}else{j=685;}}else{if(x[i+5*t]<x[i+4*t]){j=686;}else{j=687;}}}else{if(x[i+5*t]<x[i+4*t]){j=688;}else{j=689;}}}}else{if(x[i+4*t]<x[i+2*t]){if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){j=690;}else{j=691;}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=692;}else{j=693;}}else{j=694;}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+4*t]<x[i+3*t]){j=695;}else{j=696;}}else{j=697;}}}}else{if(x[i+5*t]<x[i+3*t]){if(x[i+1*t]<x[i+0*t]){if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=698;}else{j=699;}}else{j=700;}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=701;}else{j=702;}}else{j=703;}}else{if(x[i+4*t]<x[i+3*t]){if(x[i+5*t]<x[i+4*t]){j=704;}else{j=705;}}else{j=706;}}}}else{if(x[i+1*t]<x[i+0*t]){if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=707;}else{j=708;}}else{if(x[i+4*t]<x[i+3*t]){j=709;}else{if(x[i+5*t]<x[i+4*t]){j=710;}else{j=711;}}}}else{if(x[i+2*t]<x[i+1*t]){if(x[i+4*t]<x[i+3*t]){j=712;}else{if(x[i+5*t]<x[i+4*t]){j=713;}else{j=714;}}}else{if(x[i+3*t]<x[i+2*t]){if(x[i+5*t]<x[i+4*t]){j=715;}else{j=716;}}else{if(x[i+4*t]<x[i+3*t]){j=717;}else{if(x[i+5*t]<x[i+4*t]){j=718;}else{j=719;}}}}}}}}}}}}}}}
                                                                        
    INTEGER(retValue)[j] += 1;
                                                                        
    }
                                                                        
    // --
                                                                        
      UNPROTECT(2);
                                                                        
                                                                        
     return(retValue);
                                                                        
    }
                                                                        