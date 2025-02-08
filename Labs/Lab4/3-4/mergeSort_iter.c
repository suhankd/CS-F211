#include "merge.h"

void iter_MergeSort(int *arr, int n)
{
    for (int curr_size = 1; curr_size < n; curr_size = curr_size * 2)
    {

        for (int left_start = 0; left_start < n - 1; left_start += 2 * curr_size)
        {

            int mid = min(left_start + curr_size - 1, n - 1);
            int right_end = min(left_start + (2 * curr_size), n - 1);
            iter_Merge(arr, left_start, mid, right_end);
        }
    }
}

void iter_Merge(int *arr, int left, int mid, int right)
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

    while (i < n1)
    {

        arr[k++] = leftArr[i++];
    }

    while (j < n1)
    {

        arr[k++] = rightArr[j++];
    }
}

int min(int x, int y)
{

    return (x > y) ? y : x;
}