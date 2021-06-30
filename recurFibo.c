#include<stdio.h>

int fibo(int term)
{
    if(term==0 || term ==1)
        return term;
    else
        return fibo(term-1)+fibo(term-2);
}

void main()
{
    int term;
    printf("Enter a Term: \n");
    scanf("%d", &term);

    int value = fibo(term);
    printf("%d", value);

}