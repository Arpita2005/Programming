/*
C program to find Sum of all Array Elements by passing array
as an argument using User Defined Functions.
*/
#include <stdio.h>
#include <conio.h>
#define MAX_ELEMENTS 100
/*function declaration*/
int sumOfElements(int[], int);
int main()
{
    int N, i, sum;
    int arr[MAX_ELEMENTS];

    printf("Enter total number of elements(1 to %d): ", MAX_ELEMENTS);
    scanf("%d", &N);

    if (N > MAX_ELEMENTS)
    {
        printf("You can't input larger than MAXIMUM value\n");
        return 0;
    }
    else if (N < 0)
    {
        printf("You can't input NEGATIVE or ZERO value.\n");
        return 0;
    }

    /*Input array elements*/
    printf("Enter array elements:\n");
    for (i = 0; i < N; i++)
    {
        printf("Enter element %4d: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    /*function calling*/
    sum = sumOfElements(arr, N);

    printf("\n SUM of all Elements: %d\n", sum);

    getch();
    return 0;
}
/* function definition...
 * Function     :   sumOfElements
 * Argument(s)  :   int [], int - An integer array, Total No. of Elements
 * Return Type  :   int - to return integer value of sum
 */
int sumOfElements(int x[], int n)
{
    int sum, i;
    sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += x[i];
    }

    return sum;
}
