#include<stdio.h>
int main()
{
	 /*
	  * Define a list of aliases
	  */
	 enum months{Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec}; 
	 
	 enum months month;  /* define 'month' variable of type 'months' */
	 
	 printf("September is %dth month\n", month=Sep); 
	 /* Assign integer value via an alias     
	  * This will return a 9       */
	 return 0;
}
