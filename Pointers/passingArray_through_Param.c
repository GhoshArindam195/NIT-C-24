#include<stdio.h>
void show1(int arr[], int n)
{ 
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}

void show2(int *arr, int n) //2000
{  
    for(int i=0; i<n; i++)
        // printf("%d ", *(arr+i));
        printf("%d ", arr[i]);
}

void main()
{
    int arr[]={1, 2, 3, 4, 5};
    int n=5;
    
    show2(arr, n);

    printf("\n%d", sizeof(double));

    // printf("\n%d", arr[0]);
}