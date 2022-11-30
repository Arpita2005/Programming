#include<stdio.h>
#include<conio.h>
//number divisible by 3 and 5 in the given range
int main()
{
	int start_num,end_num=60,number;
		
//		printf("All the number that is divisible by 3 and 5 between 40 and 60 are: \n");
//		scanf("%d",&number);
	for(start_num=40;start_num<=end_num;start_num++)
	{
		if(start_num%3==0 || start_num%5==0)
		{
            printf("All the numbers are (between 40 to 60):\n");
			printf("  %d\n",start_num);
		}
	}
    getch();
	return 0;
}