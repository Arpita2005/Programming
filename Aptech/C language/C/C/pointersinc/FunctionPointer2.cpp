#include <stdio.h>
#include <conio.h>
// A normal function with an int parameter
// and void return type
// Function pointer in C
void fun(int a)
{ 
    printf("Value of a is %d\n", a);
}

int main()
{
    void (*fun_ptr)(int) = fun; // & removed

    fun_ptr(10); // * removed

    getch();
    return 0;
}