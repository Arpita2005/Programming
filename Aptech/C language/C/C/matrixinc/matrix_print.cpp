#include<stdio.h>
int main()
{
	int i,j;
	int a[3][2]={11,22,33,44,55,66};
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		   printf("%3d",a[i][j]);
		printf("\n");
	}
	return 0;
}
