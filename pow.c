#include<stdio.h>
void main()
{
    int num, power, result=1;
    printf("Enter your number and it's power: \n");
    scanf("%d %d", &num, &power);

    int i=1;
    while(i<=power)
    {
        result*=num;
        i++;
    }

    // for(int i=1; i<=power; i++)
    //     result*=num;

        
    printf("%d^%d=%d", num, power, result);
}
