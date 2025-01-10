#include <stdio.h>
#include <stdlib.h>

void swap(int * a, int * b);

int main(int argc, char ** argv) {

    int n = argc-1;
    int * arr = (int *)malloc(sizeof(int)*n);

    for(int i = 0; i < n; i++) {*(arr+i) = atoi(*(argv+i+1));}

    for(int i = 1; i < n; i++) {

        for(int j = i; (j > 0) && (arr[j-1] > arr[j]); j--) {

            swap(arr+j, arr+j-1);

        }

    }

    for(int i = 0; i < n; i++) {printf("%d",arr[i]);}

}

void swap(int * a, int * b) {

    int _ = *a;
    *a = *b;
    *b = _;

}