#include<stdio.h>
int perfect(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
	       sum=sum+i;
	}
	return sum;
}
int main()
{
	int x,i,sum=0;  
	printf("\n Enter a number  ");
	scanf("%d",&x);
	sum=perfect(x);
	if(x==sum)
	    printf("\n The number %d is a perfect number",x);
	else
	    printf("\n The number %d is not a perfect number ",x);
	
	return 0;
}
