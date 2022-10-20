#include "TxtToChar.h"
#include <stdio.h>
#include <stdlib.h>

char text[10000];

const char *TxtToChar(char *fileName){
    FILE *ptr;
    char ch;

    ptr = fopen_s(fileName, "r");

    if(ptr == NULL){
        printf("ERROR!");
        exit(0);
    }

    for(int i = 0; !feof(ptr); i++){
        ch = fgetc(ptr);
        text[i] = ch;
    }

    fclose(ptr);

    return text;
}