#include<stdio.h>   //header file
void main()  //void means No return type
{
    char ch;
    printf("Enter your character\n");
    scanf("%c", &ch);

    if(ch>=65 && ch<=90)
        printf("%c is an UPEER CASE CHARACTER", ch);
    else if (ch>=97 && ch<=122)
        printf("%c is a LOWER CASE CHARACTER", ch);
    else if (ch==32)
        printf("%c is a BLANK SPACE CHARACTER", ch);
    else if (ch>=48 && ch<=57)
        printf("%c is a DIGIT", ch);
    else
        printf("%c is a SPECIAL SYMBOL");
}
