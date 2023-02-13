//WAP in c to arrange a group of numbers into positive and negative numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int size;
    int arr[size];
    printf("Enter the size of array where the numbers will store\n");
    scanf("%d",&size);
    printf("Enter the Numbers:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n........................\n");
    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            printf("Positive number :%d\n",arr[i]);
        }
        else if(arr[i]<0)
        {
            printf("Negative number :%d\n",arr[i]);
        }
        else
        {
            printf("We don't know 0 is what type of number \n");
        }
    }
    getch();
    return 0;
    
}