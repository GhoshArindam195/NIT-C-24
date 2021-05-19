#include<stdio.h>
void main()
{
    int a=10, b=20;

    //sequential if............
    // if(a>b)
    // {
    //     printf("%d", a);
    // }
    // if(a<b)
    // {
    //     printf("%d", b);
    // }

    //if-else...............
    // if(a>b)
    //     printf("%d", a);
    // else
    //     printf("%d", b);

    //if-else-if ladder.............
    // if(a>b)
    // {
    //     printf("A is greater than B");
    // }
    // else if(a<b)
    // {
    //     printf("B is greater than A");
    // }
    // else
    // {
    //     printf("A and B both are equal");
    // }

    //Nested if-else...............
    if(a>=b)    //outer if
    {
        if(a>b)    //inner if   
            printf("A is Greater");
        else
            printf("A and B is equal");
    }
    else    //outer else
        printf("B is greater");



}