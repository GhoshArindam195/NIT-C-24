#include<stdio.h>
void main()
{
    int term;
    printf("Enter the term: \n");
    scanf("%d", &term);

    int oddVal=2;
    int evenVal=1;
    int sum=0;
    for(int i=1; i<=term; i++)
    {
        if(i%2==0)  //even place
        {
            printf("%d ", evenVal);
            evenVal+=2;
        }
        else    //odd place
        {
            printf("%d ", oddVal);
            oddVal+=2;
        }
    }
}