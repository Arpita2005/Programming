//1 8 72 61  521  612  343   215.....
#include<stdio.h>
// Function to reverse a number
int reverseNumber(int x)
{
	int digit,copy,reverse=0;
	copy=x;
	while(copy!=0)
	{
		digit=copy%10;
		reverse=reverse*10+digit;
		copy/=10;
	}
	return reverse;
	
}
int main()
{
	int endNum,i,n,x,last;
	printf("\n Enter the last number :    ");
	scanf("%d",&endNum);
	last=reverseNumber(endNum);
	// Check which number's cube is last number
	for(i=1;i<=1000;i++)
	{
		x=i*i*i;
		if(x==last)
		{
			n=i;
			break;
		}
	}
	// Print the original series
	for(i=1;i<=n;i++)
	   printf("%d  ",reverseNumber(i*i*i));
	
	return 0;	
}

