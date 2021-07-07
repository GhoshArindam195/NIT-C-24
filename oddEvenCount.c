#include <stdio.h>
void main()
{
    int size;
    printf("Please give the size of your array\n");
    scanf("%d", &size);

    int arr[size];

    printf("Please enter your %d elements\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);


    int evenCount=0, oddCount=0;
        
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)    //if value -> even
        {
            evenCount++;
        }
        else    //if value -> odd
        {
            oddCount++;
        }
    }

    printf("Total number of odd elements are = %d\n", oddCount);
    printf("Total number of even elements are = %d\n", evenCount);
}