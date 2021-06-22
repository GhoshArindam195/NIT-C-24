#include<stdio.h>
#include<math.h>

int isPower(int n)
{
    int i=0;
    int sum=0;
    while(sum<n)
    {
        sum=pow(2, i);

        if(sum==n)
            return 1;
        i++;
    }
}
void main()
{
    int n;
    printf("Enter your number\n");
    scanf("%d", &n);

    if(isPower(n))
        printf("YES");
    else
        printf("NO");
}