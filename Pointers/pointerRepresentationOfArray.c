#include<stdio.h>
void main()
{
    int arr[]={1, 5, 9, 2, 4};
    int *arrP=&arr;

    printf("%u\n", &arr[0]);    //6422200
    printf("%u\n", arrP);    //6422200
    printf("%u\n", *(arrP+1));    //5

    for(int i=0; i<5; i++)
    {
        printf("%d ", *(arrP+i));
    }
}