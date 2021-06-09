#include<stdio.h>
void main()
{
    int num, fact=1;
    printf("Enter your number\n");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
        fact*=i;
    printf("%d!=%d", num, fact);
}