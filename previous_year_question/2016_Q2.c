//WAP in c to reverse an array of 1D
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,arr[size],i;
    printf("Enter the size of an array:\n");
    scanf("%d",&size);
    printf("Put all the elements\n");
    printf("---------------------------\n");
    for(i=0;i<size;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Your elements are:\n");
    for(i=0;i<size;i++)
    {
    printf("%d\t",arr[i]);
    }
    printf("\nThe reverse is:\n");
    for(i=size-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    getch();
    return 0;
}