// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of rows:\n");
    scanf("%d", &n);

    int ele=1;  //2
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",ele);
            ele++;
        }
        printf("\n");
    }
}