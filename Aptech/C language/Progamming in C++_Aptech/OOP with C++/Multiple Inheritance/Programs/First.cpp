#include<iostream>
#include<conio.h>
using namespace std;
 
class A
{
	public:
	    A()  { cout << "A's constructor called" << endl; }
};
 
class B
{
	public:
	  B()  { cout << "B's constructor called" << endl; }
};
 
class C: public A, public B  // Note the order
{
	public:
	  C()  { cout << "C's constructor called" << endl; }
};
 
int main()
{
    C c;
	getch();
    return 0;
}

