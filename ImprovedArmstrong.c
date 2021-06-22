#include<stdio.h>
int digitCount(int n)
{
    int c=0;
    while(n>0)
    {
        c++;
        n/=10;
    }
    return c;
}
int isArmstrong(int n, int count)
{
    int temp=n, sum=0;
    while (temp>0)
    {
        int mod = temp%10;
        sum += pow(mod, count);
        temp/=10;
    }
    return sum==n;    
}
void main()
{
    int n;
    printf("Enter your number\n");
    scanf("%d", &n);
    int count = digitCount(n);
    // printf("%d", count);
    if(isArmstrong(n, count))
        printf("%d is Armstrong", n);
    else
        printf("%d is not Armstrong", n);

}