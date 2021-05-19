#include<stdio.h>
void main()
{
    int a=10, b=10, c;

    c = (a>b)?a :(a<b)? b: -1;
    if(c==-1)
        printf("Equal");
    else
        printf("%d\n", c);


    // if(a>b)
    // {

    // }
    // else if(a<b)
    // {

    // }
    // else
    // {

    // }
}