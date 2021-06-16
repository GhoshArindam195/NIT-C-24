#include<stdio.h>

int isPrime(int n)  
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
void main()
{
    int n;
    printf("Enter your range:\n");
    scanf("%d", &n);    //10

    for(int i=2; i<=n; i++) //2->10
    {
        int flag=isPrime(i); //2 3 4 5 6 7 8 9 10
        if(flag==1)
            printf("%d ", i);
    }
}