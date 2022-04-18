#include "stoi.h"

int core(int* array, int size){
    if(array != NULL){
        int number_int = 0, k = 1;

        while(size >= 0){
            number_int += array[size]*k;

            k *= 10;
            size--;
        }

        return number_int;
    } else{
        return NULL;
    }

    return NULL;
}

int stoi(char* number_char){
    int i = 0;
    static int pattern[11];

    while(number_char[i] != '\0'){
        int current = (int) number_char[i];

        switch(current){
            case 48: pattern[i] = 0; break;
            case 49: pattern[i] = 1; break;
            case 50: pattern[i] = 2; break;
            case 51: pattern[i] = 3; break;
            case 52: pattern[i] = 4; break;
            case 53: pattern[i] = 5; break;
            case 54: pattern[i] = 6; break;
            case 55: pattern[i] = 7; break;
            case 56: pattern[i] = 8; break;
            case 57: pattern[i] = 9; break;
            default: break;
        }

        i++;
    }
    int f = core(pattern, i-1);

    if(f != NULL){
        return f;
    } else{
        return NULL;
    }

    return NULL;
}