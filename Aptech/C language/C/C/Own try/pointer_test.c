#include <stdio.h>
#include <conio.h>
int main()
{
    // Code
    int n = 10;  // int n variable value is 10
    int *p = &n; // int pointer p = address of n where n is 1o
    printf("Value of integer: %d pointer address is : %d \n", n, &p);
    getch();
    return 0;
}