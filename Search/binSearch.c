#include <stdio.h>
#include <stdlib.h>

int binSearch(int *arr, int key, int size);

int main(int argc, char **argv)
{

    int n = argc - 1;
    int *arr = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = atoi(argv[i + 1]);
    }

    int index = binSearch(arr, 1, n);

    if (index == -1)
    {

        printf("Not Found!\n");
    }
    else
    {

        printf("The index is %d\n", index);
    }
}

int binSearch(int *arr, int key, int size)
{

    int l = 0;
    int r = size - 1;

    while (r >= l)
    {

        int mid = (l+r)/2;

        if (arr[mid] == key)
        {

            return mid;
        }

        if (arr[mid] > key)
        {

            r = mid - 1;
        }
        else
        {

            l = mid + 1;
        }
    }

    return -1;
}