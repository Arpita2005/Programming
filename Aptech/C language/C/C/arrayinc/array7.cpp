/*
 * C program to read in four integer numbers into an array and find the
 * average of largest two of the given numbers without sorting the array.
 * The program should output the given four numbers and the average.
 */
#include<stdio.h>
#define MAX 4
 
int main()
{
    int array[MAX], i, largest1, largest2, temp;
 
    printf("Enter %d integer numbers \n",MAX);
    for (i = 0; i < MAX; i++)    
    {
    	//printf("Enter %d integer numbers \n",MAX-i);
        scanf("%d", &array[i]);
    } 
    printf("Print integers are \n");
    for (i = 0; i < MAX; i++)
    {
      printf("%5d",array[i]);
    }
    printf("\n");
    /*  assume first element of array is the first larges t*/
    largest1 = array[0];
    /*  assume first element of array is the second largest */
    largest2 = array[1];
    if (largest1 < largest2)
    {
        //swaping the variables values  first and secound 
        temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }
    for (i = 2; i < 4;	i++)
    {
        if (array[i] >= largest1)
        {
            largest2 = largest1;
            largest1 = array[i];
        }
        else if (array[i] > largest2)
        {
            largest2 = array[i];
        }
    }
    printf("\n%d is the first largest \n", largest1);
    printf("%d is the second largest \n", largest2);
    printf("\nAverage of %d and %d = %d \n", largest1, largest2,(largest1 + largest2) / 2);

   return 0;
}
