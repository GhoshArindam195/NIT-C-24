#include<stdio.h>
void main()
{
    int sum=0, i=1;
    do
    {
        if(i>10)    //11>10
        {
            break;
        }
        sum+=i;
        i++;
    }
    while(i<=100);

    printf("%d\n", sum);
    printf("%d\n", i);
}