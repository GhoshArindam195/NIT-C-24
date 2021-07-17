#include<stdio.h>
void main()
{
    int m, n;
    printf("Enter the row, col for your 2D array\n");
    scanf("%d %d", &m, &n);

    int arr[m][n];

    printf("Enter your %d elements respectively", m*n);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            scanf("%d", &arr[i][j]);
    }
    printf("You have entered the below array:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    int trans[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            trans[i][j]=arr[j][i];
        }
    }


    printf("Your transposed array is shown below:\n");
     for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
}