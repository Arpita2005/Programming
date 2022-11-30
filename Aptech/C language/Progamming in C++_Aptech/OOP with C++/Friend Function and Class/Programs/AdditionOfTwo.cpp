#include <iostream>
#include<conio.h>
using namespace std;
// forward declaration
class B;
class A 
{
    private:
      int x;
    public:
      //A(): x(12) { }
      A()
	  {
	  	x=12;
	  }
      // friend function declaration
      friend int add(A,B);
};
class B 
{	
    private:
       int y;
    public:
       //B(): y(1) { }
      B()
	  {
	  	y=1;
	  }
      // friend function declaration
      friend int add(A,B);
};

// Function add() is the friend function of classes A and B
// that accesses the member variables numA and numB
int add(A a1, B b1)
{
   return (a1.x + b1.y);
}

int main()
{
    A p;
    B q;
    cout<<"Sum: "<< add(p,q);
    getch();
    return 0;
}

