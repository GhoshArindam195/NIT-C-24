#include<stdio.h>
void main()
{

	int i,size;
	printf("enter the size of array:\n");
	scanf("%d",&size);

	int arr[size];


	printf("enter the elements of array:\n");

	for(i=0;i<size;i++)
		scanf("%d", &arr[i]);


    //Reversing....................
    for(int i=0, j=size-1; i<=j; i++, j--)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

	printf("inputted array in reverse form:\n");
    for(int i=0; i<size; i++)
        printf("%d\n", arr[i]);


	
}
