#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],size,arr1[10];
    printf("Enter the size of array :\n");
    scanf("%d",&size);
    printf("Enter the Elements : \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements are :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("After Reversing the array is :\n");
    for(int i=size-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
    getch();
    return 0;
}