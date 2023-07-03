// Find an element from an array 
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,i,arr[size],se;
    printf("Enter the size of the array :\n");
    scanf("%d",&size);
    printf("Enter the elements of the array :\n");
    for(int i=0;i<size;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n:::::::::::::::::::::::::\n");
    printf("Enter the element to find from the array :\n");
    scanf("%d",&se);
    for(int i=0;i<size;i++)
    {
        if(se!=arr[i])
        {}
        else
        {
            printf("Found in %d position\n",i);
        }
    }

    getch();
    return 0;
}