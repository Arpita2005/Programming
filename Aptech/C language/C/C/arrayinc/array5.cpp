/*
 * C program to read N integers into an array A and
 * a) Find the sum of negative numbers
 * b) Find the sum of positive numbers
 * c) Find the average of all numbers
 * Display the results with suitable headings
 */
#include <stdio.h>
#include<conio.h>
#define MAXSIZE 10
// Defination
/*
There is no fixed limit to the size of an array in C. The size of any single object,
 including of any array object, is limited by SIZE_MAX , the maximum value of type size_t ,
  which is the result of the sizeof operator.
  */
// macro p processing constant
// macro & mathemitics slibrary functions
// Storage class
// after array we will do

int main()
{
    int array[MAXSIZE];
    int i, num, negative_sum = 0, positive_sum = 0;
    float total = 0.0, average;

    printf("Enter the value of num ( num=No of array elements ) \n");
    scanf("%d", &num);
    printf("Enter %d numbers (-ve, +ve and zero) \n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Print array elements \n");
    for (i = 0; i < num; i++)
    {
        printf("%3d", array[i]);
    }
    /*  Summation starts */
    for (i = 0; i < num; i++)
    {
        if (array[i] < 0)
        {
            negative_sum += array[i];
        }
        else if (array[i] > 0)
        {
            positive_sum += array[i];
        }
        else if (array[i] == 0)
        {
            ; // If you have entered 0 you have entered nothing to add or less that's why it's blank
        }
        total += array[i];
    }
    average = (float)((float)total / (float)num);
    printf("\n Sum of all negative numbers =  %d\n", negative_sum);
    printf("Sum of all positive numbers =  %d\n", positive_sum);
    printf("\n Average of all input numbers =  %.2f\n", average);
    getch();
    return 0;
}
