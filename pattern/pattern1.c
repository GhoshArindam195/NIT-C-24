// *
// * *
// * * *

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of rows:\n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) //row
    {
        for(int j=1; j<=i; j++) //columns or elements
            printf("* ");
        printf("\n");
    }
}