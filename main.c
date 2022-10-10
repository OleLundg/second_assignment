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
    TxtToChar("test1.txt"); //funktion som skriver om önskad .txt-fil till en char array

    struct Currency curr[20];
    char *ptr;
    int cu = 0;
    int n = 0;
    int i;
    int j = 0;
    char c[5];
    char v[12];
    //loopar igenom hela char-arrayen tills den är slut
    for(i = 0; text[i]!='\0'; i++){

        //körs när aktuella tecknet i textfilen är mellanslag, tab eller radbyte.
        if(text[i]=='\t' || text[i]=='\n' || text[i]==' '){
            j = 0;
                //om det finns något sparat i variabeln c sparas innehållet till den aktuella struct Currency.country
                if(c[0]!=NULL){
                    curr[n].country = c; //sparar innehållet i variabeln c till structen
                    printf("%s : ", curr->country);
                    memset(c, 0, sizeof(c)); //rensar variablen c från dess innehåll
                    cu++;   //counter för bokstäver eller siffror, jämna tal = bokstäver, ojämna = siffror.

                }
                //om det finns något sparat i variabeln v sparas inehållet till den aktuella struct Currency.value
                else if(v[0]!=NULL) {
                    curr[n].value = strtol(v, &ptr, 0); //tar en char array av siffror och ändrar om till long int samt sparar den till structen
                    printf("%ld\n", curr[n].value);
                    memset(v, 0, sizeof(v)); //rensar variablen v från dess innehåll
                    n++;
                    cu++;

                }
            }
        else if(text[i]!='\t' || text[i]!='\n' || text[i]!=' '){
            //när text[i] innehåller en bokstav sparas den till c[j]
            if(cu%2==0){
                c[j]=text[i];
            }
            //när text[i] innehåller en siffra sparas den till v[j]
            else {
                v[j]=text[i];
            }
            j++;
        }
        //skriver ut det sista värdet av Currency.value
        if (text[i+1] == '\0'){
            curr[n].value = strtol(v, &ptr, 0);
            printf("%ld", curr[n].value);
        }
    }
    return 0;
}
