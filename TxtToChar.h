char text[400];

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
        text[i] = ch;
            }

    fclose(ptr);

    return text;
    }
