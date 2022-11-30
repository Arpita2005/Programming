#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n Input the values of a and b:  ");
	scanf("%d %d",&a,&b); // 10   &    20
	c=a++;
	printf("\na=%d , c=%d",a,c); //   a=11  ,  c=10
	c=++a;
	printf("\na=%d , c=%d",a,c); //   a=12  ,  c=12
	c=--a;
	printf("\na=%d , c=%d",a,c);  // a=11  ,  c=11
	c=a--;
	printf("\na=%d , c=%d",a,c);  // a=10  c=11
	
	c=a++ + --b;
	printf("\na=%d , b=%d & c=%d",a,b,c); 
	/* c=10++  +   --20  =  10   +   19   =  29
	   a=11  b=19   c=29
	*/	
	c=--a * b++;   //  a=11  b=19 
	printf("\na=%d , b=%d & c=%d",a,b,c); 
	/* c=--11  *  19++   =  10   *   19   =  190
	   a=10   b=20   c=190	
	*/
    c=--b / a++;   //  a=10  b=20
	printf("\na=%d , b=%d & c=%d",a,b,c);        
    //  a=11  b=19   c=1    
	return 0;
}
