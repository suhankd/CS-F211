#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main(int argc, char **argv)
{

    int n = argc - 1;
    int *arr = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = atoi(argv[i + 1]);
    }


}
void swap(int *a, int *b)
{

    int _ = *a;
    *a = *b;
    *b = _;
}