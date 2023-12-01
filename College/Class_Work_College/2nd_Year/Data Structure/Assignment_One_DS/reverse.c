#include<stdio.h>
#include<conio.h>
int main()
{
    int size;
    printf("Enter the size of array :\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the Elements : \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements are :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nAfter Reversing the array is :\n");
    for(int i=size-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    getch();
    return 0;
}