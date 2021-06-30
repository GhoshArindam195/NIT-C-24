#include<stdio.h>

long long recurDecToBinary(int dec)
{
    if(dec==0)
        return 0;
    else
    {
        return (dec%2)+recurDecToBinary(dec/2)*10;
    }
}
void main()
{
    int dec;
    printf("Enter a decimal number: \n");
    scanf("%d", &dec);

    long long resBin = recurDecToBinary(dec);
    printf("%lld", resBin);
}