#include<stdio.h>
void main()
{
    int row, col;
    printf("Please give the row and columns of your array\n");
    scanf("%d %d", &row, &col);

    int arr[row][col];  //3X3

    printf("Please enter your %d elements\n", row*col);
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }

    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
}