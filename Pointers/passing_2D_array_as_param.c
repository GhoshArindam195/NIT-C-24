#include <stdio.h>

void show(int m, int n, int arr[][n])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}

void main()
{
    int arr2D[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int m=3, n=3;

    show(m, n, arr2D);
}