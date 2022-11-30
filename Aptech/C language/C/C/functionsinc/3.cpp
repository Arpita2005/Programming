#include<stdio.h>
#include<conio.h>
// function prototype, also called function declaration
void swap(int *a, int *b); 
//Pointer will store
//var -> address of var
// m  -> 234567
// n  -> 234567+4=234571
int main()
{
    int m = 22, n = 44;
    //  calling swap function by reference
    printf("\nValues before swap m = %d  and n = %d",m,n);
    swap(&m, &n);   //& = address of operator  || * = d-reference operator
	printf("\nValues after swap m = %d  and n = %d",m,n); 
	
    getch();
	return 0;    
}
 
void swap(int *a, int *b)//(a=234567,b=234571)
{
    int tmp;
    //fuck you lordakash3000
    tmp = *a;//tmp = (*a) -> tmp=22
    *a = *b;//(*a) = (*b) -> (*a)=44
    *b = tmp;//(*b) = tmp -> (*b)=22
}
