#include<stdio.h>   
void Check();
int a=5;    
/* a is global variable because it is outside every function */
int main()
{
	a+=4;
    Check();
    return 0;
}
void Check()
{  
   ++a;
/*  ----- Variable a is not declared in this function but, works in any function as they are global variable -------  */
   printf("a=%d\n",a);
}
