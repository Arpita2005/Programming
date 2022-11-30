#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("\n Enter 3X3 matrix elements \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\n Print the Original Matrix \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	printf("\n Print the Diagonal Matrix \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j || (i+j)==2)
				printf("%4d",a[i][j]);
			else
				printf("%4c",' ');
		}
		printf("\n");
	}
	
	return 0;

}
