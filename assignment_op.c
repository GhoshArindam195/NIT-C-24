#include <stdio.h>

int main()
{
    int a=10;   //= //10    
    a=a+10;     //20
    a+=10;     //+= //30

    a=a-10;     //20
    a-=10;      //10

    printf("%d\n", a);

    int b=20;
    b=b*2;  //40
    b*=2;   //80
    printf("%d\n", b);

    int c=30;
    c=c/10; //3
    c/=3;   //1
    printf("%d\n", c);




    return 0;
}