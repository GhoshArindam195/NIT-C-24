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

    int sum=0;
    for(int i=0; i<size; i++)
        sum+=arr[i];
    
    printf("The sum of your array is %d", sum);
}