#include<stdio.h>
int main()
{
	int i,j,k;
	printf("\n Input two numbers:  ");
	scanf("%d %d",&i,&j);
	k=i*j; // Product
	printf("\n Product=%d",k);
	k=i/j; // Quotient
	printf("\n Quotient=%d",k);
	k=i%j; // Remainder
	printf("\n Remainder=%d",k);
	
	return 0;
}
