#include<stdio.h>
void main()
{
    int a, b, c;
    printf("Enter your three numbers:\n");
    scanf("%d%d%d", &a, &b, &c);

    // if(a>b)
    // {   //A win
    //     if(a>c) //A win
    //         printf("A is the greates");
    //     else    //C win
    //         printf("C is the greatest");
    // }
    // else    
    // {   //B win
    //     if(b>c) //B win
    //         printf("B is the greatest");
    //     else    //C win
    //         printf("C is the greatest");
    // }


    int win = a>b?(a>c?a:c):(b>c?b:c);
    printf("%d", win);
}