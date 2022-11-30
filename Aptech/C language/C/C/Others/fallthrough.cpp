#include<stdio.h>
//Define fall through in switch case with a suitable program
int main()
{
	int i=2;
	switch(i)
	{
		case 1:   printf("\n The value of i is  1");
				  
		case 2:   printf("\n The value of i is  2");
				  
		case 3:   printf("\n The value of i is  3");
				  
		case 4:   printf("\n The value of i is  4");	
	    		  break;
	    case 5:   printf("\n The value of i is  5");	
	    		  
	    default:  printf("\n Any other value");  //  optional
	    
	}
	return 0;
}
