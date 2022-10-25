#include <stdio.h>
#include <stdlib.h>
#include "TxtToChar.h"


const char *TxtToChar(char *fileName){
    static char textArr[10000];
    FILE *ptr;
    char ch;

    ptr = fopen(fileName, "r");

    if(ptr == NULL){
        printf("ERROR!");
        exit(0);
    }

    for(int i = 0; !feof(ptr); i++){
        ch = fgetc(ptr);
        textArr[i] = ch;
    }

    fclose(ptr);

    return textArr;
}

