#include<stdio.h>

void hello()
{
	printf("\nHello C Programming");
	hello();
}

int main()
{
	hello();
	return 0;
}
