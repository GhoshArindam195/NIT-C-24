// 1
// 2 3
// 3 4 5

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of rows:\n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) //row
    {
        int start_ele=i;
        for(int j=1; j<=i; j++) //columns or elements
        {
            printf("%d ", start_ele);
            start_ele++;
        }
        printf("\n");
    }
}