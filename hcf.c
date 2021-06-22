#include<stdio.h>
int getMin(int n1, int n2)
{
    return n1<n2?n1:n2;
}
int getHcf(int n1, int n2)
{
    int min = getMin(n1, n2);
    int hcf=0;
    for(int i=1; i<=min; i++)
    {
        if((n1%i==0) && (n2%i==0))
            hcf=i;
    }
    return hcf;
}
void main()
{
    int n1, n2;
    printf("Enter your number1 and number2 respectively\n");
    scanf("%d %d", &n1, &n2);

    int resHcf=getHcf(n1, n2);
    printf("hcf(%d, %d) = %d", n1, n2, resHcf);
}