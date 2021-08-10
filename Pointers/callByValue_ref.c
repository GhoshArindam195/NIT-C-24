#include<stdio.h>
void reduce(int *n)  //Formal
{
    (*n)--;
}
void main()
{
    int n=100;
    reduce(&n);  //Actual
    printf("%d\n", n);
}