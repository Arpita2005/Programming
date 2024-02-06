//delete an element of an array 
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,arr[size],index;
    printf("Enter the size of the array :\n");
    scanf("%d",&size);
    printf("Enter the elements :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the index to delete :");
    scanf("%d",&index);
    if(index>=size+1)
    {
        printf("Out of array index\n");
    }
    else
    {
        for(int i=index-1;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
        printf("The final array after deletion is :\n");
        for(int i=0;i<size;i++)
        {
            printf("%d\t",arr[i]);
        }
    }
    getch();
    return 0;
}