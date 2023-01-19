#include <stdio.h>
#include<conio.h>
int main()
{
    int i,n,flag=1;
	
	printf("Enter the value of num: \n");
	scanf("%d",&i);
	
	for(n=2;n<i;n++)
	{
		if(i%n==0)
		{
		flag =0;
			break;
		}
			
    }
    if(flag==0&&i!=2)
    printf("It is not a prime number \n");
    else
    printf("It is a prime number \n");
    
    getch();
    return 0;
}
