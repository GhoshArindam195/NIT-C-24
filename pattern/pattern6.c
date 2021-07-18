// A
// B C
// C D E

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of rows:\n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) //row
    {
        char start_ele=(char) (64+i);   //type casting
        for(int j=1; j<=i; j++) //columns or elements
        {
            printf("%c ", start_ele);
            start_ele++;
        }
        printf("\n");
    }
}