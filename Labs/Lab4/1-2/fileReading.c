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

    if(dataStruct == NULL) {

        fprintf(stderr, "Memory allocation failed!\n");
        return NULL;
    }

    for (int i = 0; i < fileSize; i++)
    {

        int _;
        fscanf(file,
               "%d,", &_);

        int stringSize = 0;
    #define MAX_SIZE 100
        char num[MAX_SIZE];

        memset(num, 0, MAX_SIZE);

        for (char c = getc(file); stringSize < MAX_SIZE - 1 && c != ',' ; c = getc(file))
        {
            num[stringSize++] = c;
        }

        num[stringSize] = 0;
        strncpy(dataStruct[i].name, num, MAX_SIZE);       


        fscanf(file,
               "%d,%d,%d\n",
               &dataStruct[i].age,
               &dataStruct[i].height,
               &dataStruct[i].weight);

        // printf("%s, %d, %d, %d\n",
        //     dataStruct[i].name,
        //     dataStruct[i].age,
        //     dataStruct[i].height,
        //     dataStruct[i].weight);
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