#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],b[50],c[100],i,j,n,m,k,x;
	printf("\nEnter number of terms first array :");
scanf("%d",&n);
printf("\nEnter numbers one by one in ascending order :");
for(i=0;i<n;i++)
{ 
	scanf("%d",&a[i]);
}
printf("\nEnter number of terms of second array :");
scanf("%d",&m);
printf("\nEnter numbers one by one in ascending order :");
for(i=0;i<m;i++)
{ 
	scanf("%d",&b[i]);
}
printf("\nElements of the first array are :");
for(i=0;i<n;i++)
{
	printf("%d ",a[i]);
}
printf("\nElements of the second array are :");
for(i=0;i<m;i++)
{
	printf("%d ",b[i]);
}
k=0;
	for(i=0,j=0;i<=n&&j<=m;)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i=i+1;
			k=k+1;
		}
		else if(a[i]>b[j])
		{
			c[k]=b[j];
			j=j+1;
			k=k+1;
		}
		else
		{
			c[k]=b[j];
			j=j+1;
			c[k+1]=a[i];
			i=i+1;
			k=k+2;
		}
	}
	while(i<=n)
	{
		c[k]=a[i];
		k=k+1;
		i=i+1;
	}
	while(j<=m)
	{
		c[k]=b[j];
		k=k+1;
		j=j+1;
	}
	x=k-1;
	printf("\nArray after merge :");
for(i=0;i<x;i++)
{
	printf("%d ",c[i]);
}
    getch();
	return(1);
}
