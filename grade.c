#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks:\n");
    scanf("%d", &marks);
    marks/=10;
    switch (marks)
    {
        case 9:
            printf("GRADE : O");
            break;
        case 10:
            printf("GRADE : O");
            break;
        case 8:
            printf("GRADE : E");
            break;
        case 7:
            printf("GRADE : A");
            break;
        case 6:
            printf("GRADE : B");
            break;
        case 5:
            printf("GRADE : C");
            break;
        case 4:
            printf("GRADE : D");
            break;
        default:
            printf("FAIL");
    }
}
