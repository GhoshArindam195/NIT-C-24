#include<stdio.h>
void main()
{
    int n;
    printf("give 1 for only Math\ngive 2 for only CS\ngive 3 for both the subjects\n");
    scanf("%d", &n);

    int reward = (n==1)?200:(n==2)?300:(n==3)?500:0;
    printf("Your reward is %d", reward);
}