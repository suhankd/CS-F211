#include "merge.h"

void printDatabase(int * arr, int size);

int main(void) {

    int * dataBase = readFile("marks.txt");
    rec_MergeSort(dataBase, 0, 1000);
    printDatabase(dataBase, 1000);

}

void printDatabase(int * arr, int size) {

    for(int i = 0; i < size; i++) {

        printf("%d\n",arr[i]);

    }

}