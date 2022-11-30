#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, i;
    printf("Multiplication table using for loop \n");
    printf("Enter a number : ");
    scanf("%d", &i);
    for (a = 1; a <= 10; a++)
    {
        b = a * i;
        printf(" \n Multiplication of %d x %d = %d", a, i, b);
    }
    getch();
    return 0;
}