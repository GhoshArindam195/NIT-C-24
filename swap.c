#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two  numbers\n");
    scanf("%d %d", &a, &b); //a=10, b=20 

    printf("Before swap, a=%d and b=%d\n", a, b);

    //with third var c.......
    // int c=a;    //c=10
    // a=b;        //a=20
    // b=c;        //b=10;
    // printf("After swapping, a=%d, b=%d\n", a, b);

    // without third var.........
    a=a+b;  //a=30
    b=a-b;  //b=30-20=10
    a=a-b;  //a=30-10=20
    printf("After swapping, a=%d, b=%d\n", a, b);







}