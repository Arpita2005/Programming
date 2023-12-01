//delete from array and display it
#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[500],pos, i, num;
    printf ("No. of elements : ");
        scanf (" %d", &num);
    printf ("\nEnter the elements \n");
    for (i=0;i<num; i++)
    {
        scanf ("%d",&arr[i]);
    }
    printf( "\n\nPosition from where we want to delete\n");
    scanf ("%d", &pos);
    if (pos >=num+1) // num is the length , position cant exceed the maximum length
    {
        printf ("\n Out of range ");
    }
    else
    {
        for (i = pos-1; i < num -1; i++) // num-1 because we are deleting 1 element , last value wont count
        {
            arr[i] = arr[i+1]; // swapping the value at the position we have given with the next value in the array
        }
        printf ("\n\nThe final  array is:-\n");
        for (i=0;i<num-1;i++)
        {

            printf("%d \t",arr[i]);
        }
    }
    printf("\n\n\n");
    return 0;
}
