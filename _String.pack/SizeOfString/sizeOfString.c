#include "sizeOfString.h"

int sizeOfString(char* chain){
    if(chain != NULL){
        int i = 0;
        while(*(chain + i) != '\0'){
            i++;
        }

        return i-1;
    } else {
        return NULL;
    }

    return NULL;
}