#include "mathematics.h"

int isPair(int number){
    if(number != NULL){
        if(number%2 == 0){
            return 1;
        } if(number%2 != 0){
            return 0;
        }
    } else{
        return NULL; 
    }

    return NULL;
}