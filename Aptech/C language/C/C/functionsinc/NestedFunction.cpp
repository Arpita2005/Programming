#include<stdio.h>
// Nested functions
void show(int *n)
{
	printf("\nMemory Address= %u",n);
	printf("\nMemory Address= %x",n);
}

void display(int *n)
{
	show(n);
	printf("\nValue=%d",*n);
}

int main()  
{
	int x=100;
	display(&x);
	
	return 0;
	
}      
