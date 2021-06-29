#include<stdio.h>
#include<math.h>


int binToDecimal(int bin)
{
    int resDec=0;
    int i=0;

    while(bin!=0)
    {
        int mod = bin%10;
        resDec+=mod * pow(2, i);
        i++;
        bin/=10;
    }

    return resDec;
}
void main()
{
    int bin;
    printf("Enter your Binary Number: \n");
    scanf("%d", &bin);

    int resDec=binToDecimal(bin);
    printf("%d\n", resDec);

}