#include<stdio.h>
long long decToBinary(int dec)  //Formal Param
{
    long long resBin=0;
    int arr[100];
    int i=0;
    while(dec!=0)
    {
        int mod=dec%2;
        arr[i]=mod;
        i++;
        dec/=2;
    }
    i--;
    while(i>=0)
    {
        resBin=resBin*10 + arr[i];
        i--;
    }
    return resBin;
}

void main()
{
    int dec;
    printf("Enter a decimal number: \n");
    scanf("%d", &dec);

    long long resBin = decToBinary(dec);    //Actual Param
    printf("%lld", resBin);

}