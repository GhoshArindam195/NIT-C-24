#include <stdio.h>
void main()
{
    int a, *iptr;
    float b, *fptr;

    void *ptr;

    a = 10;
    iptr = &a;

    b = 20.5f;
    fptr = &b;

    ptr = iptr;
    printf("%d\n", *(int *)ptr);

    ptr = fptr;
    printf("%f\n", *(float *)ptr);

}