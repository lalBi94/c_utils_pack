/*
    *Discord: Bilaal#7175
    *Discord_ID: 704759845844287618
    *GitHub: https://github.com/lalBi94
    *Paypal Donate: paypal.me/mavenaudits
*/

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