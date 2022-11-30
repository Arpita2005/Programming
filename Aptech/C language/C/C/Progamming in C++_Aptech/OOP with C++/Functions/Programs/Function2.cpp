#include <iostream>
using namespace std;

void calc(int x);

int main()
{
 	int x = 10;
 	//Call by Value
 	calc(x);
    printf("\n%d", x);
}

void calc(int x)
{
 	x = x + 10 ;
 	
}

