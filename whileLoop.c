#include<stdio.h>
void main()
{
    // int sum=0;
    // for(int i=1; i<=100; i++)
    //     sum += i;
    // printf("%d\n", sum);

    int sum=0;
    int i=1;    //1 2 3 4 5 10
    while(i<=100)   
    {
        if(i>10)    //11>10
        {
            break;
        }
        sum+=i; //1 3 6 10
        i++;
    }
    printf("%d\n", sum);
    printf("%d\n", i);

}

