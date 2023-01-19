//Write a program in C to Print Fibonacci Series using recursion.
#include<stdio.h>
#include<conio.h>
int fibonacci(int num);
int main()
{
  int num;
  printf("Enter the last range number to show the fibonacci series:\n");
  scanf("%d",&num);
  for(int i=0;i<num;i++)
  {
    printf("%d",fibonacci(num));
  }
  getch();
  return 0;
}
int fibonacci(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return fibonacci(num-1)+fibonacci(num-2);
    }
}