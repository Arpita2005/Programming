#include<iostream>
using namespace std;

class C
{
	private:
	int c;
	
	public:
	void set_c();
	void get_c();
	friend C operator +(C,C); 
};
//Definition of set_a() function
void C :: set_c()
{
	c= 5;
}
//Definition of get_a() function
void C :: get_c()
{
	cout<< c <<"\n";
}
//Definition of overloaded binary operator * friend function, which multiples two objects of A and returns an object of A
C operator +(C c1, C c2)
{
	C temp;
	temp.c = c1.c + c2.c;
	return temp;
}
int main()
{
	C c1, c2;
	c1.set_c();
	c2.set_c();	
	cout<<"The value of a in first object : ";
	c1.get_c();	
	cout<<"The value of a in second object : ";
	c2.get_c();	
	//Calling operator overloaded friend function + to multiple two operands, objects
	 c1= c1 + c2;	//ob1 and ob2 objects are passed as an argument to the operator * overloaded friend function.
	cout<<"The value of a after calling operator overloading function += is : ";
	c1.get_c();
}

