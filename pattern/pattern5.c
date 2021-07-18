// 1
// 0 1
// 1 0 1

#include<stdio.h>
void main()
{
    int rows;   //3
    printf("Enter your number of rows:\n");
    scanf("%d", &rows);

    for(int i=1; i<=rows; i++)
    {
        int s;
        if(i%2==0)
            s=0;   
        else
            s=1;
        for(int j=1; j<=i; j++)
        {
            printf("%d ", s);
            if(s==0)
                s=1;
            else
                s=0;
        }
        printf("\n");
    }
}