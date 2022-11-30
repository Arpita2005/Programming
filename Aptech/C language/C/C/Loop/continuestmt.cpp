#include<stdio.h>

int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i==21)
		{
			printf("\n\n====================\n");
			continue;			
		}			   
		printf("\n%d",i);
	}
	return 0;
}
