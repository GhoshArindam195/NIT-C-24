#include<stdio.h>
void main()
{
    int n;
    float ans=0;
    printf("Enter your terms\n");
    scanf("%d", &n);

    for(int i=1, j=1; i<=n; i++, j+=2)
    {
        if(i%2!=0)  //if odd term 
        {
            int fact=1;
            if(j==1)
                fact=1;
            else
            {
                for(int k=1; k<=j; k++)
                    fact*=k;
            }
            ans = ans-(1.0/fact);
        }
        else    // if even term
        {
            int fact=1;
            if(j==1)
                fact=1;
            else
            {
                for(int k=1; k<=j; k++)
                    fact*=k;
            }
            ans = ans+(1.0/fact);
        }
    }

    printf("%f", ans);
}