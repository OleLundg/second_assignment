#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "create_txt.h"
#include "TxtToChar.h"
//Second assignment

struct Currency{
    char *country;
    long value;
};

int main()
{
    TxtToChar();
    struct Currency curr[20];
    char *ptr;
    int cu = 0;
    int n = 0;
    int i;
    int j = 0;
    char c[5];
    char v[12];

    for(i = 0; text[i]!='\0'; i++){

        if(text[i]=='\t' || text[i]=='\n' || text[i]==' '){
            j = 0;

            if(text[i+=1]!='\t' || text[i+=1]!='\n' || text[i+=1]!=' '){

                if(cu%2==0){
                    curr[n].country = c;
                    printf("%s\n", curr->country);
                    memset(c, 0, sizeof(c));
                    cu++;
                    i--;
                }
                else {
                    curr[n].value = strtol(v, &ptr, 0);
                    printf("%ld\n", curr[n].value);
                    memset(v, 0, sizeof(v));
                    n++;
                    cu++;

                }
            }
        }
        else if(text[i]!='\t' || text[i]!='\n' || text[i]!=' '){
            if(cu%2==0){
                c[j]=text[i];
                //printf("%s", c);
            }
            else {
                v[j]=text[i];
                //printf("%s", v);
            }
            j++;
        }
        if (text[i+1] == '\0'){
            curr[n].value = strtol(v, &ptr, 0);
            printf("%ld", curr[n].value);
        }
    }
    return 0;
}
