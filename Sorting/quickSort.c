#include <stdio.h>
#include <stdlib.h>

void swap(int * a, int * b);

void quickSort(int * arr, int low, int high);

int partition(int * arr, int left, int right);

int main(int argc, char **argv)
{

    int n = argc - 1;
    int *arr = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {

        arr[i] = atoi(argv[i + 1]);
    }

    quickSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++) {

        printf("%d ", arr[i]);

    }

    printf("\n");
    return 0;



}

int partition(int * arr, int left, int right) {

    int pivot = arr[right];

    int i = left;

    for(int j = left; j < right; j++) {

        if(arr[j] <= pivot) {

            swap(arr + j, arr + i);
            i++;

        }

    }

    swap(arr + i, arr + right);
    return i;

}

void quickSort(int * arr, int low, int high) {

    if(low < high) {

        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);

    }

}

void swap(int * a, int * b) {

    int _ = *a;
    *a = *b;
    *b = _;
}