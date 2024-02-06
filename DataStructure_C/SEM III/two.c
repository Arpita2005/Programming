//Reverse an array 
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,arr[size];
    printf("Enter the size of the array :\n");
    scanf("%d",&size);
    printf("Enter the elements :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("After reversing the array is :\n");
    for(int i=size-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    getch();
    return 0;
}