#include<stdio.h>
// function declaration
int func();
int main()
{
// function call
	int i = func();
	printf("\n %d",i);
	return 0;
}
// function definition
int func()
{
	return 5;
}
