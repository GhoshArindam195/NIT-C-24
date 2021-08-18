#include<stdio.h>
void fun1()
{
    static int a=10;
    printf("%d\n", a);
    a++;
}

void main()
{
    fun1();
    fun1();
}