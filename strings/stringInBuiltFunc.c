#include<stdio.h>
#include<string.h>
void main()
{
    //strcat()...........
    char s1[]="Arindam";
    char s2[]="Ghosh";
    // strcat(strcat(s1," "), s2);
    // puts(s1);

    // char s3[50];
    // s3=strcat(s1, s2);  //error

    // strlen().......
    // printf("%d", strlen(s1));

    // strrev().............
    // puts(strrev(s1));
    // puts(s1);
    // puts(strrev(s1));


    // strcmp()...............
    // char s1[]="Arindam";
    // char s2[]="Anway";
    // char s3[]="Arindam";

    // printf("%d\n", strcmp(s1, s2));
    // printf("%d\n", strcmp(s1, s3));


    //strcpy()...........

    // char s3[50];
    // s3=strcat(s1, s2);  //error
    char s3[60];
    strcpy(s3, strcat(s1, s2));
    puts(s3);


}