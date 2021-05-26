#include<stdio.h>
void main()
{
    int num;
    printf("Enter your two digit number\n");
    scanf("%d", &num);  //29

    int f, r;
    f=num/10;   //29/10=2
    r=num%10;   //29%10=9

    int res=r*10+f;

    printf("after reversing %d become %d", num, res);
}