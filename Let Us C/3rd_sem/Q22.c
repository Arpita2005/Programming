// Remove duplicate elements fron array
#include<stdio.h>
#include<conio.h>
int main()
{
    int size=0,arr[size],i,temp[size],count=0;
    printf("Enter the size of array :\n");
    scanf("%d",&size);
    printf("Enter the elements :\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }  
    printf("Before removing duplicates the array is : \n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }   

    for (i = 0; i < size; i++)
    {
        int j;
        for (j = 0; j < count; j++)
        {
          if (arr[i] == temp[j])
            break;
        }
        if (j == count)
        {
          temp[count] = arr[i];
          count++;
        }
    }

    printf("\nArray After  Removing Duplicates: ");
    for (i = 0; i < count; i++)
    printf("%d ", temp[i]);

    getch();
    return 0;
}