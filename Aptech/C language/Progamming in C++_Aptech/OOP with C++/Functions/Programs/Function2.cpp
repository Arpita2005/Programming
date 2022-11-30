#include <iostream>
#include<conio.h>
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
 	getch();
}

