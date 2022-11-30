#include<stdio.h>

int main()
{
  int x;
  x = 0;
    /* "Hello, world!" is printed at least one time
      even though the condition is false */      
  do 
  {
  
      printf("Hello, world!\n");
  } 
  while (x!=0 );  
 /*infinite loop*/ 
  do 
  {
    
      printf("Hello, world!\n");
  } 
  while (x==0);
    
  return 0;  
}
