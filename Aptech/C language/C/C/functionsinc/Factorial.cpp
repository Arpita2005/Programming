#include<stdio.h>
int fact(int a);

int main()
{
	int k,p;
	printf("Enter a number for finding factorial: ");
	scanf("%d",&k);
	p=fact(k);
	printf("Factorial of the given number %d  = %d",k,p);
}
int fact(int n)
{
	int b,result=1;
	for(b=1;b<=n;b++)
		result=result*b;
	return (result);
}
	

