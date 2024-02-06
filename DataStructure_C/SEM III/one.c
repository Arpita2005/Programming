//WAP to rotate an array of n integers by d times rotation. N= 10 and d is user input. Rotationis circular right to left 
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,d;
    printf("Enter the size of an array :\n");
    scanf("%d",&size);
    int arr[size],temp[d];
    printf("Enter the elements :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter how much time you want the rotation :\n");
    scanf("%d",&d);

    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d;i<size;i++)
    {
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++)
    {
        arr[size-d+1]=temp[i];
    }
    printf("After rotation the final array is :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    getch();
    return 0;
}