#include<stdio.h>
#include<limitS.h>
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


    int row=-1, maxSum=INT_MIN;

    for(int i=0; i<m; i++)
    {
        int sum=0;
        for(int j=0; j<n; j++)
        {
            sum+=arr[i][j];
        }
        if(sum>maxSum)
        {
            row=i;
            maxSum=sum;
        }
    }

    printf("Max Sum = %d\n max row = %d",maxSum, row+1);


}