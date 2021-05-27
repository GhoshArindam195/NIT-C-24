#include<stdio.h>
void main()
{
    int a=1;
    // if(a==1)
    //     printf("Your value is 1\n");
    // else if(a==2)
    //     printf("Your value is 2\n");
    // else
    //     printf("You entered something else");
    switch(a)
    {
        case 1:
            switch(a)
            {
                case 1:
                    printf("Nested case 1\n");
                    break;
                default:
                    printf("Nested deafult\n");
            }
            break;
        case 2:
            printf("Your value is 2\n");
            break;
        case 3:
            printf("Your value is 3\n");
            break;
        default:
            printf("You entered something else\n");
    }

}