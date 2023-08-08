// Write a program in C to find the sum of all elements of the array
#include <stdio.h>
#include <conio.h>
void sum_predefine()
{
    // Initialize array
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;

    // Calculate length of array arr
    int length = sizeof(arr) / sizeof(arr[0]);

    // Loop through the array to calculate sum of elements
    for (int i = 0; i < length; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of all the elements of an array: %d", sum);
}
int main()
{
    sum_predefine();
    getch();
    return 0;
    
}