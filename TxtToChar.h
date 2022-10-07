char text[400];

const char *TxtToChar(){
    FILE *ptr;
    char ch;

    ptr = fopen("currency.txt", "r");

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
