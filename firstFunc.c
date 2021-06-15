#include<stdio.h>

int add(int a, int b)   //Formal Parameter
{
    int temp=a+b;
    return temp;
}
int sub(int a, int b)
{
    int temp=a-b;
    return temp;
}
int mul(int a, int b)
{
    int temp=a*b;
    return temp;
}
int div(int a, int b)
{
    int temp=a+b;
    return temp;
}
void main()
{
    int a,b;
    printf("Hello enter your two numbers: \n");
    scanf("%d%d", &a, &b);

    int temp=add(a, b); //Actual Parameter
    printf("Add=%d\n", temp);
    temp= sub(a, b);
    printf("Sub=%d\n", temp);
    temp= mul(a, b);
    printf("Mul=%d\n", temp);
    temp= div(a, b);
    printf("Div=%d\n", temp);

    // a=50, b=30;
    // temp= add(a, b);
    // printf("Add=%d\n", temp);
}