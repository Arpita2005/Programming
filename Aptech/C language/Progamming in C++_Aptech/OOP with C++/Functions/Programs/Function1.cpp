#include <iostream>
#include<conio.h>
using namespace std;

int sum (int x, int y);   //declaring function

int main()
{
	 int a = 10;
	 int b = 20;
	 int c = sum (a, b);   //calling function
	 cout <<"Sum:=   "<< c;
}
	
int sum (int x, int y)   //defining function
{
	getch();
   return (x + y);
}

