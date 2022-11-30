/*
C program to print Table of an Integer Number
using User Define Functions.
*/
#include <stdio.h>
#include <conio.h>
/*function declaration*/
void printTable(int);

int main()
{
    int number;
    printf("Table print \n");
    printf("Enter an integer number: ");
    scanf("%d", &number);

    printf("Table of %d is:\n", number);
    printTable(number);

    getch();
    return 0;
}

/* function definition...
 * Function     :   printTable
 * Argumenets   :   int- to pass number for table
 * Return Type  :   void
 */
void printTable(int num)
{
    int i;

    for (i = 1; i <= 10; i++)
        printf("%2d X %2d = %2d\n", num, i, (num * i));
}
