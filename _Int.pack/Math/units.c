#include "mathematics.h"

int unitsOf(int number, int position){
    if(number != NULL && position != -1){
        int i = 0, m = 10, k = 1, current;
        for(; i != position; i++){
            current = number%m/k;
            printf("%d mod(%d)/%d -> %d\n", number, m, k,current);

            k*=10;
            m*=10;
        }

        return current;
    } else{
        return -1;
    }

    return -1;
}
