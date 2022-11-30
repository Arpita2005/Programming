#include<stdio.h>

void checkPrime(int n)
{
	int i;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
			break;
	}	
	if(i==n)
		printf("\n The number is prime  ");
	else
		printf("\n The number is non prime  ");
		
}


int main()
{	
    int n;
    printf("\nEnter a number:   ");
    scanf("%d",&n);
	checkPrime(n);
	return 0;
}
