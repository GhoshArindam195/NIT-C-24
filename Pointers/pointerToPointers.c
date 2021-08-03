#include<stdio.h>
void main()
{
    int a=10;
    int *p=&a;
    int **pp=&p;

    printf("a's value -> %d\n", a);
    printf("a's ADDRESS -> %d\n", &a);
    printf("p pointer, points to -> %d\n", p);
    printf("p's ADDRESS -> %d\n", &p);
    printf("pp pointer, points to -> %d\n", pp);

    **pp=20;
    printf("a's updated value -> %d\n", a);
}