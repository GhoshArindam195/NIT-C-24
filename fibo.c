#include<stdio.h>
void main()
{
    int f1=1, f2=1, n, fibo=0;
    printf("Enter your number\n");
    scanf("%d", &n);

    if(n==1 || n==0)
    {
        printf("fibo(%d)=%d", n, 1);
        return;
    }
    else if(n<0)
    {
        printf("please enter a positive value");
        return;
    }
    //f1=1 1 2 3 5
    //f2=1 2 3 5 8
    //fibo=0 2 3 5 8
    for(int i=2; i<=n; i++) //n=5 //i=2 3 4 5 6
    {
        fibo=f1+f2;
        f1=f2;
        f2=fibo;
    }
    printf("fibo(%d)=%d", n, fibo);

}