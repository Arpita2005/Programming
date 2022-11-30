/* * C program to read N integers and store them in an array A.
 * Find the sum of all these elements using pointer. */
#include <stdio.h>
#include <malloc.h> 
#include<conio.h>
int main()
{
    int i, n, sum = 0;
    int *a; 
    printf("Enter the size of array A \n");
    scanf("%d", &n);
    // DMA 
    a = (int *) malloc(n * sizeof(int));
    // pointer_variable=(datatype *)malloc(numberOfElements*sizeof(datatype))
    printf("Enter Elements of the Array \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", a + i);  //   &a[i] -> a + i -> Pointer_variable + IndexVariable 
		
    }
    /*  Compute the sum of all elements in the given array */
    for(i = 0; i < n; i++)
    {
        sum +=  *(a + i);  //  a[i] -> *(a + i) -> *(Pointer_variable + IndexVariable)
    }
    printf("Sum of all elements in array = %d\n", sum);
    getch();
    return 0;
}
