#include<iostream>
using namespace std;

class Base
{
	 public:
		 void show()
		 {
		  	cout<<"\nBase class";
		 }
		 void display()
		 {
		  	cout<<"\ndisplay() function of Base Class";
		 }
};
class Derived : public Base
{
	 public:
		 void show()// This show() function overrides the show() function of Base class 
		 {
		  	cout<<"\nDerived Class";
		 }
 
};

int main()
{
	 Base b;      //Base class object
	 Derived d;  //Derived class object
	 b.show();   //Early Binding Ocuurs
	 cout<<endl;
	 d.show(); 
	 d.display();	 
	  
	 return 0;
}
