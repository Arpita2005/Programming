// Sort the array in ascending order
#include<stdio.h>
#include<conio.h>
int main()
{
    int size, arr[size],temp;
    printf("Enter the size of array :\n");
    scanf("%d",&size);
    printf("Enter the elements of array :\n");
    for(i=0;i<size;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
           if(arr[i]<arr[i+1])
          {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
          }
        }
    }

    printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < size;i++)
            printf("%d\n",arr[i]);
}