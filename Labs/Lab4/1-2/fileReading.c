#include "sort.h"

person *readFile(char *fileName)
{

    FILE *file = fopen(fileName, "r");

    int fileSize = numLines(fileName);

    if (fileSize == -1)
    {
        return NULL;

    }
    person *dataStruct = (person *)malloc(sizeof(person) * fileSize);

    for (int i = 0; i < fileSize; i++)
    {

        int _;
        fscanf(file,
               "%d,", &_);

        int stringSize = 0;

        for (char c = getc(file); c != ','; c = getc(file))
        {

            dataStruct[i].name[stringSize++] = c;
        }

        dataStruct[i].name[stringSize] = '\0';

        fscanf(file,
               "%d,%d,%d\n",
               &dataStruct[i].age,
               &dataStruct[i].height,
               &dataStruct[i].weight);
    }

    fclose(file);

    return dataStruct;
}

int numLines(char *fileName)
{
    char fileSize[20];

    int i;

    for (i = 3; fileName[i] != '.'; i++)
    {

        fileSize[i - 3] = fileName[i];
    }
    fileSize[i] = '\0';
    return atoi(fileSize);
}

void printDatabase(person *database, int size)
{

    for (int i = 0; i < size; i++)
    {

        printf("%s, %d, %d, %d\n",
               database[i].name,
               database[i].age,
               database[i].height,
               database[i].weight);
    }
}