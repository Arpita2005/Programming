#include<stdio.h>
int main()
{
	int i=80;
	switch(i)
	{
		case 10:  printf("\n The value of i is  10");
				  break;
		case 20:  printf("\n The value of i is  20");
				  break;
		case 30:  printf("\n The value of i is  30");
				  break;
		case 40:
		case 50:
		case 60:
	    case 70:
	    case 80:
	    case 90:
	    case 100: printf("\n The value of i is greater than or equal to 40 and less than or equal to 100");
	    		  break;
	    default:  printf("\n Any other value");  //  optional
	    
	}
	return 0;
}
