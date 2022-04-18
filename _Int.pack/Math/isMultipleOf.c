#include "mathematics.h"

int isMultipleOf(int number, int base){
    if(number != NULL && base != NULL){
        if(number%base == 0){
            return 1;
        } if(number%base != 0){
            return 0;
        }
    } else{
        return NULL; 
    }

    return NULL;
}