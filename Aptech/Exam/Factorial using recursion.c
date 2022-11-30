#include<stdio.h>
#include<conio.h>
int factorial(int number)
{
    if(number==0)
     return 1;
     else if(number<0)
     return -1;
     else
     return number*factorial(number-1);
}
int main()
{
    int number,ans;
    printf("Enter a number:\n");
    scanf("%d",&number);
    ans=factorial(number);
    printf("Factorial of %d is %d: \n",number,ans);
   getch();
   return 0; 

}