#include<stdio.h>
#include<conio.h>
int main()
{
	char name[30],ch;
	int i=0;                              
	printf("Enter name :");
	while(ch!= '\n')   
	{
		ch=getchar();
		name[i]=ch;
		i++;
	}
	name[i]='\0';
	printf("\n The length of string %s is %d",name,i-1);
	getch();
	return 0;
}
