#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    char str3[]=" is a friend of ";
    int i, j;
    printf("enter first string\n");
    gets(str1);
    printf("enter second string\n");
    gets(str2);
    for (i = 0; str1[i] != '\0'; i++);
    for (j = 0; str3[j] != '\0'; i++, j++)
    {
        str1[i] = str3[j];
    }
    for (j = 0; str2[j] != '\0'; i++, j++)
    {
        str1[i] = str2[j];
    }
    str1[i] = '\0';
    puts(str1);
    return 0;
}
