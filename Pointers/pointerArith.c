#include<stdio.h>
void main()
{
    int a=34;
    int *ptrA=&a;
    // printf("%u\n", ptrA);   //6422216
    // printf("%u\n", ptrA+1);  //6422220
    // printf("%u\n", ptrA+2);  //6422224
    // printf("%u\n", *ptrA);  //34

    printf("%u\n", ptrA);   //6422216
    printf("%u\n", ++ptrA);  //6422220
    printf("%u\n", ++ptrA);  //6422224
    printf("%u\n", *ptrA);  //garbage
}