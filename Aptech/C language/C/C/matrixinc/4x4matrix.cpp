#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("\n Enter the number of rows:\n ");
	scanf("%d",&r);
	printf("\n Enter the number of columns:\n");
	scanf("%d",&c);
	printf("\n Enter the elements of the matrix\n");
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("\n The Diagonal Matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j || (i+j)==3)
			{
				printf("%4d",a[i][j]);
			}
			else
			{
				printf("%4c",' ');
			}
			
		}
		printf("\n");
	}
	return 0;
}
