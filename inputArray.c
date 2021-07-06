#include<stdio.h>
void main()
{
    int size;
    printf("Please give the size of your array\n");
    scanf("%d", &size);

    int arr[size];

    printf("Please enter your %d elements\n", size);
    for(int i=0; i<size; i++)
        scanf("%d", &arr[i]);
    
    // printf("Now Prnting your inputted elements\n");

    // for(int i=0; i<size; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }
    printf("Now Prnting your inputted elements in reverse order\n");

    for(int i=size-1; i>=0; i--)
        printf("%d ", arr[i]);

}