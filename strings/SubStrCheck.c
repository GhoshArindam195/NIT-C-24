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
int isSubString(char str1[], char str2[])
{
    int len1 = getLength(str1);
    int len2 = getLength(str2);

    for(int i=0; i<len1; i++)
    {
        char ch1=str1[i];
        for(int j=0; j<len2; j++)
        {
            char ch2=str2[i];
            if(ch1==ch2)
            {
                
            }
            else
            {

            }
        }
    }
}
void main()
{
    char str1[100], str2[100];
    puts("Enter your string1: \n");
    gets(str1);
    puts("Enter your string2: \n");
    gets(str2);

    int res = isSubString(str1, str2);
    if(res == 0)
        printf("Not Substring");
    else
        printf("Substring");
}