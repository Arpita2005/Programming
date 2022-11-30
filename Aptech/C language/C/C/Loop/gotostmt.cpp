#include<stdio.h>

int main()
{
	double bal;
	aa: printf("\nDeposit balance: (Minimum balance should be Rs 5 Cr.)  ");
	scanf("%lf",&bal);
	if(bal>=50000000.00)
	   printf("\nWelcome to our Swiss bank !! your balance is %.2lf",bal);
	else
	   goto aa;
	   
	return 0;
}
	
