#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,res;
	char ch,choice;
	do
	{
		printf("\n Enter 1 st number:   ");
		scanf("%d",&i);
		printf("\n Enter 2nd number:   ");
		scanf("%d",&j);
		fflush(stdin);// for stdin - standard input maintenance
		printf("\n Enter + for add,- for subtract, * for product, %/ for quotient,%% for remainder\n");
	    ch=getche();
	    switch(ch)
	    {
	    	case '+':  res=i+j;
	    	           break;
	    	case '-':  res=i-j;
	    	           break;
	    	case '*':  res=i*j;
	    	           break;
	    	case '/':  res=i/j;
	    	           break;
	    	case '%':  res=i%j;
	    	           break;
	    }
	    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%')
	    	printf("\n The result is %d",res);
	    else
	        printf("\n Error");
	       
	    fflush(stdin);
	    printf("\n\n Do u want 2 continue? Press Y for yes or N for No:    ");
	    choice=getche();
	}
	while(choice!='N');
	
	return 0;
}
