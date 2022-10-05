#include <stdio.h>
#include <stdlib.h>
//Second assignment

FILE *fp;
void create_txt(char *fileName)
{
    fp = fopen(fileName, "w");
}

int main()
{
    FILE *ptr;
    char ch;
    char text[1024];

    ptr = fopen("currency.txt", "r");
/*
    while (!feof(ptr)) {
        ch = fgetc(ptr);
        printf("%c", ch);

    }*/
    for(int i = 0; !feof(ptr); i++){
        ch = fgetc(ptr);
        text[i] = ch;
            }

    printf("text: %s", text);

    fclose(ptr);

    return 0;
}
