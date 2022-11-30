#include <stdio.h>
//POINTERS-TO-POINTERS
int main()
{
 char *fruit[] = 
 {
	 "watermelon",
	 "banana",
	 "pear",
	 "apple",
	 "coconut",
	 "grape",
	 "blueberry"
 };
 int x;
 for(x=0;x<7;x++)
 {
	 putchar(**(fruit+x));  //putchar need a \n to break te line
	 putchar('\n');
 }
 return(0);
}
