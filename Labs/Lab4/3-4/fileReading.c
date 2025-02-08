#include "merge.h"

int *readFile(char *fileName)
{

    FILE *file = fopen(fileName, "r");

    int fileSize = 1000;

    int *dataBase = (int *)malloc(sizeof(int) * fileSize);

    for (int i = 0; i < fileSize; i++)
    {
        fscanf(file,
               "%d\n",
               dataBase + i);
        
    }

    fclose(file);

    return dataBase;
}