#include "sort.h"

void insertionSort(person *dataBase, int size)
{

    for (int i = 1; i < size; i++)
    {

        for (int j = i;
             (j > 0) && (dataBase[j].height < dataBase[j - 1].height);
             j--)
        {
            swap(dataBase + j, dataBase + j - 1);
        }
    }
}

void swap(person *a, person *b)
{

    person temp = *a;
    *a = *b;
    *b = temp;
}