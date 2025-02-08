#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

typedef struct {

    int id;
    char name[100];
    int age;
    int height;
    int weight;

}
person;

/*
File Reading
*/

person * readFile(char * fileName); // Function to take in a file name and return a struct array.

int numLines(char * fileName); // Function to return number of datapoints.

void printDatabase(person * database, int size);

/*
Sorting
*/

// Insertion Sort

void insertionSort(person *dataBase, int size);
void swap(person *a, person *b);

// Merge sort (Will use iterative implementation cos space complexity.)

void Merge(person * arr, int left, int mid, int right);
void mergeSort(person * arr, int n);
int min(int x, int y);

#endif