#include<stdio.h>
// 0,7,26,63,124,215
int main()
{
	int i;
	for(i=1;i<=5;i++)
	   printf("%2d,",i*i*i-1);
	printf("%2d",i*i*i-1);
	return 0;
}
