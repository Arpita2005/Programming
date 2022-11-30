#include<stdio.h>
#include<conio.h>
// function prototype, also called function declaration
void swap(int a, int b);          

 int main()
{
    int m = 22, n = 44;
    
    printf("\nvalues before swap  m = %d and n = %d", m,n);
    // calling swap function by value
    swap(m,n);     
	printf("\nvalues after swap  m = %d and n = %d", m,n); 
	
    
    
    getch();
	return 0;   
} 
void swap(int a, int b)//a=m,b=n
{ 
    int tmp; //tmp=0
    tmp = a; //tmp=22,a=22
    a = b; //a=44,b=44
    b = tmp; //b=22,tmp=22
    printf("\n i am in swap funtion()  a= %d and b= %d",a,b);
}

//a= (a+b) 
    // (22 + 44) c = 66
    // 66-a = 44
    // b = c-b = 22

