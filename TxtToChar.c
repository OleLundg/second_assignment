#include <stdio.h>
#include <stdlib.h>
#include "TxtToChar.h"

char textArr[10000];

const char *TxtToChar(char *fileName){
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