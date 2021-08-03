#include<stdio.h>
void main()
{
    int a=10;

    int *p=&a;

    printf("%d\n", a);
    printf("%d\n", *p);

    
    printf("%u\n", &a);
    printf("%u\n", p);

    *p=12;
    printf("%d\n", a);

    int *ptr=&a;
    if(ptr==NULL)
        printf("Empty pointer\n");
    else
        printf("Valid Pointer\n");

    
}