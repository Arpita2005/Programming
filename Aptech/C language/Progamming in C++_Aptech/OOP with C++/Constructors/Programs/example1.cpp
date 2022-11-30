// Cpp program to illustrate the concept of Constructors
#include <iostream>
#include<conio.h>
using namespace std;

class construct
{ 
  public: 
	int a, b;        
    // Default Constructor
	construct()
	{
	    a = 10;
	    b = 20;
	}
	// void noob()
	// {
	// 	string n="noob";
	// 	cout<<n;

	// }
	int m1()
	{
		cout<<a<<" "<<b;
		return 0;
	}
};
int main()
{
    // Default constructor called automatically
    // when the object is created
	construct c;
	cout << "main?() a:= "<< c.a<<"b:="<< c.b<<endl;
	c.m1();
	//c.noob();
	 

	getch();
	return 0;
}

