#include <stdio.h>
#include <conio.h>
// A normal function with an int parameter
// and void return type
// Function pointer
void fun(int a)
{
    printf("Value of a is %d\n", a);
}
int main()
{
    // fun_ptr is a pointer to function fun()
    void (*fun_ptr)(int) = &fun; // Fun parameter value passed by this fun_ptr (int)
    /* The above line is equivalent of following two
       void (*fun_ptr)(int);
       fun_ptr = &fun;
    */
    // Invoking fun() using fun_ptr
    (*fun_ptr)(10);

    getch();
    return 0;
}
