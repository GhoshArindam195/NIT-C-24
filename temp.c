#include<stdio.h> 
void main()
{
    int num= 12352242;
    while(num>0)
    {
        int mod = num%10;
        printf("%d\n", mod);
        num=num/10;
    }

}