#include "sort.h"

/*
// Insertion sort takes way too long.
// 10,000 entries took 900ms, which means 
// 1,000,000 entries would take at most days.
// Check merge sort implementation instead.
*/

int main(int argc, char ** argv) {

    double * time_used = (double *)malloc(sizeof(double)*(argc - 1));

    // for(int i = 0; i < argc - 1; i++) {

    //     clock_t start, end;
    //     person * dataBase = readFile(argv[i+1]);

    //     int fileSize = numLines(argv[i+1]);

    //     start = clock();
    //     // insertionSort(dataBase, fileSize);
    //     mergeSort(dataBase, fileSize);
    //     end = clock();

    //     double x = (double)(end - start)*1000/CLOCKS_PER_SEC;
    //     printf("Time taken : %lf\n", x);
    // }

    clock_t start, end;
    person * dataBase = readFile(argv[1]);

    int fileSize = numLines(argv[1]);

    // insertionSort(dataBase, fileSize);
    mergeSort(dataBase, fileSize);
    end = clock();
    // printDatabase(dataBase, fileSize);

    double x = (double)(end - start)*1000/CLOCKS_PER_SEC;
    printf("Time taken : %lf\n", x);


    // for(int i = 0; i < argc - 1; i++) {

    //     printf("Time taken : %lf\n", time_used[i]);

    // }

}