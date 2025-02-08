#include "sort.h"

void Merge(person *arr, int left, int mid, int right)
{

    int n1 = mid - left + 1;
    int n2 = right - mid;

    person *leftArr = (person *)malloc(sizeof(person) * n1);
    person * rightArr = (person *)malloc(sizeof(person) * n2);

    // Populate subarrays

    for (int i = 0; i < n1; i++)
    {
        leftArr[i] = arr[left + i];
    }

    for (int j = 0; j < n2; j++)
    {
        rightArr[j] = arr[mid + 1 + j];
    }

    int j = 0, i = 0;
    int k = left;

    while ((j < n2) && (i < n1))
    {

        if (leftArr[i].height > rightArr[j].height)
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

    while (j < n2)
    {
        arr[k++] = rightArr[j++];
    }
}

void mergeSort(person * arr, int n)
{
    for (int curr_size = 1; curr_size < n; curr_size = curr_size * 2)
    {

        for (int left_start = 0; left_start < n - 1; left_start += curr_size * 2)
        {

            int right_end = min(n - 1, left_start + 2 * curr_size - 1);
            int mid = min(n - 1, left_start + curr_size - 1);

            Merge(arr, left_start, mid, right_end);
        }
    }
}

int min(int x, int y)
{
    return (x < y) ? x : y;
}