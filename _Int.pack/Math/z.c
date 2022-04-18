#include "mathematics.h"

int main(){
    int test = delta(1, 1, 4); 
    printf("%d and have %d solution\n", test, howMainSolutionFor(test));

    return 0;
}