#include<stdio.h>
void main()
{
    // int arr[]={1, 2, 3, 4, 5};  //pre defined array



    //pre defined string...........
    //Method 1.........
    // char name[]={'A', 'r', 'i', 'n', 'd', 'a', 'm', '\0'};

    //Method 2.............
    // char name[] ="Arindam";


    char name[100];
    printf("Enter your name: \n");

    //Taking Input....
    //Method 1........
    // scanf("%s", &name);

    //Method 2........
    gets(name);


    //Printing string.........
    
    //Method 1..........
    // printf("Hello, %s sir", name);

    //Method 2.........
    puts(name);
}