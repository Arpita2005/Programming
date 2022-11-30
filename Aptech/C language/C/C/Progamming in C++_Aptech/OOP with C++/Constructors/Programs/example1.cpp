// Cpp program to illustrate the concept of Constructors
#include <iostream>
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
	cout << "a:= "<< c.a << endl << "b:="<< c.b<<endl;
	c.m1();
	return 0;
}

