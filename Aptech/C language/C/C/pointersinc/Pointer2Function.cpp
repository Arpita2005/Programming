#include<stdio.h>
// Pointer To Function
int sum(int x, int y)
{
 	return x+y;
}
int main()
{
	 int (*fp)(int,int);
	 fp = sum;
	 int s = fp(10, 15);
	 printf("Sum is %d",s);
	 
	 return 0;
}
