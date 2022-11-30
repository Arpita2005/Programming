#include<stdio.h>
//No of digits of a number in its fractional part
int main()
{
	char str[50];
	int i,len,c,count;
	len=c=count=0;
	printf("\n Input the number:   ");
	gets(str);
	while(str[len]!='\0')
	{
		len++;		
	}	
	for(i=0;i<len;i++)
	{
		if(str[i]=='.')
		{
			c=i+1;
			break;			
		}   
	}
	for(i=c;i<len;i++)
	   count++;
	printf("\n No of digits in fractional part = %d",count);
	return 0;
}
