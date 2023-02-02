// S= 1 + (1+2) + (1+2+3) + ..............+(1+2+3+........N)
#include<stdio.h>
#include<conio.h>
int sumOfTerms(int n)
{
	int i,s=0;
	for(i=1;i<=n;i++)
		s=s+i;
	return s;
}
int main()
{
	int i,n,s=0;
	printf("\nEnter the value of terms:   ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		s=s+sumOfTerms(i);
        printf("\n...................\n");
	printf("\nSum is: \n%d",s);
	getch();
	return 0;
}

