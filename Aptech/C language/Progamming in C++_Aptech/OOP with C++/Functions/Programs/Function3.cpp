#include <iostream>
using namespace std;

int calc(int x);
//Call by value
int main()
{
	 int x = 10;
	 x = calc(x);
	 printf("\n%d", x);
}

int calc(int x)
{
	 x = x + 10 ;
	 return x;
}

