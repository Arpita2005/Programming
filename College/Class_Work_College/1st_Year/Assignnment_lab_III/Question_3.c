#include<stdio.h>
#include<conio.h>
void swapping_function();
int main()
{
    swapping_function();
    getch();
    return 0;
}
void swapping_function()
{
	int a,b,c;
	printf("Enter the first number: \n");
	scanf("%d",&a);
	printf("Enter the second number:  \n");
	scanf("%d",&b);
	printf("Enter the third number:  \n");
	scanf("%d",&c);
	printf("before swapping:\n");
	printf("a=%d and b=%d and c=%d\n",a,b,c);
	a=a+b+c;
	b=a-b-c;
	c=a-b-c;
	a=a-b-c;
	printf("after swapping:\n");
	printf("a=%d and b=%d and c=%d\n",a,b,c);		
}

