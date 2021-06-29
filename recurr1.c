#include<stdio.h>
void display(int s, int n)
{
    if(s<=n)
    {
        printf("%d\n", s);     //1 2 3 4 5
        s++;                    //2 3 4 5 6
        display(s, n);  
    }
}
void main()
{
    int s=1;
    int n=5;
    display(s, n);  //initial call
}