#include "merge.h"

void rec_MergeSort(int *arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        rec_MergeSort(arr, left, mid);
        rec_MergeSort(arr, mid + 1, right);

        rec_Merge(arr, left, mid, right);
    }
}

void rec_Merge(int *arr, int left, int mid, int right)
{

    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftArr[n1], rightArr[n2];

    // Populate subarrays

    for (int i = 0; i < n1; i++)
    {

        leftArr[i] = arr[left + i];
    }

    for (int i = 0; i < n2; i++)
    {

        rightArr[i] = arr[mid + i + 1];
    }

    int k = left;
    int i = 0;
    int j = 0;

    while ((i < n1) && (j < n2))
    {

        if (leftArr[i] > rightArr[j])
        {

            arr[k] = rightArr[j];
            j++;
        }
        else
        {

            arr[k] = leftArr[i];
            i++;
        }

        k++;
    }

    while(i < n1) {

        arr[k++] = leftArr[i++];

    }

    while(j < n1) {

        arr[k++] = rightArr[j++];

    }
}