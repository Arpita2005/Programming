// Find the largest element of an array 
#include<stdio.h>
#include<conio.h>
int main()
{
    int size, arr[size],i,largest=0;
    printf("Enter the size of array :\n");
    scanf("%d",&size);
    printf("Enter the elements of array :\n");
    for(i=0;i<size;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",arr[i]);
    }
    printf("\n==============================\n");
    printf("The largest element is :\n");
    for(i=0;i<size;i++)
    {
        if(largest<arr[i])
        {
            largest=arr[i];
        }
    }
    printf("%d",largest);
    getch();
    return 0;
}