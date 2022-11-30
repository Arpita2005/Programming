#include <iostream>
#include<conio.h>
using namespace std;

void calc(int *p);  
    //Call by reference                    
int main()
{
	 int x = 10;
	 calc(&x);     // passing address of x as argument
	 printf("%d", x);
}

void calc(int *p)
{
   
   *p = *p + 10;
}

