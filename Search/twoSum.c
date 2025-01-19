#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n = argc - 1;
    int *arr = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = atoi(argv[i + 1]);
    }

    int k;
    scanf("%d", &k);

    int *left = arr;
    int *right = arr + n - 1;

    while (right > left)
    {
        int sum = *right + *left;

        if (sum == k)
        {
            printf("Numbers are : %d %d", *left, *right);
            return 0;
        }
        else
        {
            if (sum > k)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
    }
}