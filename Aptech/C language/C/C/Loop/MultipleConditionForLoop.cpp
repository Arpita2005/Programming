#include<stdio.h>
int main()
{
      int i,j;    
	 // Multiple condition for loop	 
	 for(i=9,j=25;i<=37 && j<=47 ;i++,j++)
	    printf("\n %d  %d",i,j);
	printf("\n=========================\n");
	 for(i=9,j=25;i<=37 || j<=47 ;i++,j++)
	    printf("\n %d  %d",i,j);
	 return 0;
	 /*
	i          j       ( &&)         OP -   i           j
================================
9         25                                 9          25
.......................
.................
37       47                                 31        47
=====================================
28      22  (diff)
Smaller diff will get priority 
9+22=31 



i          j       ( ||)         OP -   i           j
================================
9         25                                 9          25
.......................
.................
37       47                                 37        53
=====================================
28      22  (diff)
Larger diff will get priority 
25+28=53
   
	 */
}		
