#include <stdio.h>
void main()
{
    int n;
    float sum = 0;
    printf("Enter your range\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        sum+=1.0/i;
    printf("%f", sum);
}