#include<stdio.h>
void main()
{
    int n, flag=0;  //15
    printf("Enter your number:\n");
    scanf("%d", &n);

    for(int i=2; i<n; i++)  //n = 15
    {
        if(n%i==0)  //i=2
        {
            flag=1;
            printf("The number is not prime");
            break;
        }
    }
    if(flag==0)
        printf("The number is prime");
}