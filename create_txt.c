#include "Header Files/create_txt.h"

FILE *fp;
void create_txt(char *fileName)
{
    fp = fopen(fileName, "w");
}