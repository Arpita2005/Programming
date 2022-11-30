#include<stdio.h>
// function prototype, also called function declaration
void swap(int a, int b);          
 
int main()
{
    int m = 22, n = 44;
    // calling swap function by value
    printf("\n values before swap  m = %d and n = %d", m, n);
    swap(m, n);   
    printf(" \nvalues after swap m = %d and n = %d", m,n);
    return 0;
	                    
}
 
void swap(int a, int b)
{ 
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
   
}
