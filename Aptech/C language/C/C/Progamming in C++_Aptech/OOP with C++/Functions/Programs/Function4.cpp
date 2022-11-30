#include <iostream>
using namespace std;

void calc(int *p);  
                        
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

