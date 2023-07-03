//Replace the elemennt with another element in an array
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,ne,pos;
    printf("Enter How Many Elements Will Be in An Array ?\n");
    scanf("%d",&size);
    int arr[size];

    printf("\nEnter the elements :-\n");
    for(int i=0;i<size;i++)
    {
        printf("%d element is :",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\n==================\n");
    printf("The elements are :\n");
    for(int i=0;i<size;i++)
    {
        printf("Element Number %d is : %d\n",i+1,arr[i]);
    }

    printf("\nEnter the new single element to be in an array ");
    scanf("%d",&ne);
    printf("\nEnter the position of the new element ");
    scanf("%d",&pos);

    for(int i=size-1;i>pos;i--)
    {
        // arr[i-1]=arr[i];
        // arr[pos-1]=ne;
        if(pos==i)
        {
            arr[pos-1]=ne;
        }
    }

    for(int i=0;i<=size;i++)
    {
        printf("Element Number %d is : %d\n",i+1,arr[i]);
    }

    getch();
    return 0;
}