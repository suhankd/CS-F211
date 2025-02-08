#include <stdio.h>
#include <stdlib.h>

void maxHeap(int *arr, int n, int i);

int main(int argc, char **argv)
{

    int n = argc - 1;
    int *arr = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = atoi(argv[i + 1]);
    }
}

void maxHeap(int *arr, int n, int i)
{

    int largest = i;

    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if ((arr[largest] < arr[l]) && (l < n))
    {
        largest = l;
    }

    if ((arr[largest] < arr[r]) && (r < n))
    {

        largest = r;
    }

    if (largest != i)
    {
        swap(arr + i, arr + largest);
        maxHeap(arr, n, largest);
    }
}

void heapSort(int *arr, int n)
{

    for (int i = n / 2 - 1; i > 0; i--)
    {

        maxHeap(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--)
    {

        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}