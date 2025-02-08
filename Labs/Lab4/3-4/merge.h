#ifndef MERGE_H
#define MERGE_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// File Reading
int * readFile(char * fileName);

// Merge Sort (Recursive)
void rec_Merge(int * arr, int left, int mid, int right);
void rec_MergeSort(int * arr, int left, int right);

// Merge Sort (Iterative)
void iter_Merge(int * arr, int left, int mid, int right);
void iter_MergeSort(int * arr, int n);
int min(int x, int y);

#endif