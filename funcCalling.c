#include<stdio.h>  //pre processor directive 

void display(int n) //30
{
    printf("%d\n", n);
}
// void add(int, int); //function prototype
void add(int a, int b)  //10 20 //Formal Param
{
    int temp=a+b;
    display(temp);
}
void main()
{
    int a, b;
    scanf("%d %d", &a, &b); //10 20

    add(a, b);  //Actual param
}
