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
        arr[i] = atoi(argv[i + 1]);
    }

    int low = 0;
    int high = n - 1;

    mergeSort(arr, low, high);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

void mergeSort(int *arr, int left, int right)
{

    if (left < right)
    {

        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        Merge(arr, left, mid, right);
    }
}

void Merge(int *arr, int left, int mid, int right)
{

    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftArr[n1], rightArr[n2];

    for (int i = 0; i < n1; i++)
    {

        leftArr[i] = arr[left + i];
    }

    for (int j = 0; j < n2; j++)
    {

        rightArr[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;

    int k = left;

    while ((i < n1) && (j < n2))
    {

        if (leftArr[i] < rightArr[j])
        {

            arr[k] = leftArr[i];
            i++;
        }
        else
        {

            arr[k] = rightArr[j];
            j++;
        }

        k++;
    }

    while (i < n1)
    {

        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2)
    {

        arr[k] = rightArr[j];
        j++;
        k++;
    }
}