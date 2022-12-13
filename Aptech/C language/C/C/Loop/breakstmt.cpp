#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("\n Enter the value of n(1 to 100):   ");
	scanf("%d",&n);
	printf("The numbers are:\n");
	for(i=1;i<=100;i++)
	{
		if(i==n)
		    break;
		printf("\n%d",i);
	}
	getch();
	return 0;
}
