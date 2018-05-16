#include "coeficienteBinomial.h"
#include "factorial.cpp"

int coeficienteBinomial(int n, int r){
    if(r == 1){
        return n;
    }else{
        if(n == r){
            return 1;
        }else{
            return factorial(n) / (factorial(r) * factorial(n - r));
        }
    }
}