#include<stdio.h>
int getLength(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }

    return i;
}
void main()
{
    char str[50];
    puts("Enter your string: \n");
    gets(str);

    int len = getLength(str);

    printf("Your string's length is : %d", len);
}