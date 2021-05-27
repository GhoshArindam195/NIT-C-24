#include<stdio.h>
void main()
{
    int num;
    printf("enter a value\n");
    scanf("%d", &num);

    if(num>0)
        printf("%d\n", num);
    else
        printf("%d\n", num*-1);
}
