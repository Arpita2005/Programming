//S= 1^2 + 2^2+....+N^2 pattern printing
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,s=0;
	printf("Enter the value of n:   ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		s=s+i*i;
        printf("\n=====================\n");
	printf("\nSum is = %d",s);
	getch();
	return 0;
}