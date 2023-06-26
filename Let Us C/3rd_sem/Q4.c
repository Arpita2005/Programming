//  Addition

#include <stdio.h>
#include<conio.h>
int main()
{
   float num1,num2,add;
   printf("Enter two numbers :\n");
   scanf("%f%f",&num1,&num2);
   
   add=num1+num2;
   printf("The Addition is :%.3f",add);
   getch();
   return 0;
}