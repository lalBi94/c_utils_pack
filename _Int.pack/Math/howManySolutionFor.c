#include "mathematics.h"

int howMainSolutionFor(int delta){
    if(delta != NULL){
        if(delta < 0){
            return 0;
        } if(delta == 0){
            return 1;
        } if(delta > 0){
            return 2;
        }
    } else{
        return NULL;
    }

    return NULL;
}