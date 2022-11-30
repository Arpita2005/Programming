#include<stdio.h>
// function prototype, also called function declaration
void swap(int *a, int *b); 
 
int main()
{
    int m = 22, n = 44;
    //  calling swap function by reference
    printf("\n values before swap m = %d  and n = %d",m,n);
    swap(&m, &n); 
	printf("\n values after swap m = %d and n = %d", m,n);        
}
 
void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    
}
