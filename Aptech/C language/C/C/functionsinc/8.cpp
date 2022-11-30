#include <stdio.h>
#include <conio.h>
// Calling a function - Addition of two numbers
int addition(int num1, int num2)
{
     int sum;
     /* Arguments are used here*/
     sum = num1 + num2;
     /* function return type is integer so I should return some
     integer value */
     return sum;
}
int main()
{
     int var1, var2;
     printf("Enter first number : ");
     scanf("%d", &var1);
     printf("Enter second number : ");
     scanf("%d", &var2);
     /* calling function � function return type is integer so I would be
      * needing to store the returned value in some integer variable */
     int res = addition(var1, var2);
     printf("Output: %d", res);

     getch();
     return 0;
}
