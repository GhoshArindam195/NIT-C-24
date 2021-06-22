#include<stdio.h>
#include<math.h>

int isArmstrong(int n)
{
    int temp=n, sum=0;
    while (temp>0)
    {
        int mod = temp%10;
        sum += pow(mod, 3);
        temp/=10;
    }

    // if(sum==n)
    //     return 1;
    // else
    //     return 0;

    return sum==n;    
}
void main()
{
    int n;
    printf("Enter your three digit number\n");
    scanf("%d", &n);
    if(n>999 || n<100)
    {
        printf("The number isn't a three digit number\n");
        return;
    }
    
    if(isArmstrong(n))
        printf("%d is Armstrong", n);
    else
        printf("%d is not Armstrong", n);

}