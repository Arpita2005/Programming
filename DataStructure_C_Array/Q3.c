// Reverse Of An array 
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,arr[size];
    printf("Enter the size of the array :\n");
    scanf("%d",&size);
    printf("Enter the elements of the array :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("The elements are :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }

    printf("\n...........................\n");
    printf("The Reverse Of the Array is :\n");
    for(int i=size-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }

    getch();
    return 0;
}