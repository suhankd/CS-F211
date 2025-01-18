#include <stdio.h>
#include <stdlib.h>

void mergeSort(int arr[], int left, int right);

void Merge(int *arr, int left, int mid, int right);

int main(int argc, char **argv)
{

    int n = argc - 1;
    int *arr = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = atoi(argv[i]);
        printf("%d\n", arr[i]);
    }

    return 0;
}

void mergeSort(int arr[], int left, int right)
{
    if (left > right)
    {

        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        Merge(arr, left, mid, right);
    }
}

void Merge(int *arr, int left, int mid, int right)
{
    int k;

    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftArr[n1], rightArr[n2];

    for (int i = 0; i < n1; i++){leftArr[i] = arr[left + i];}
    for (int i = 0; i < n2; i++){rightArr[i] = arr[mid + i + 1];}

    int i, j = 0;
    while(i < n1 && j < n2) {

        if(leftArr[i] <= )

    }


}