#include<iostream>
using namespace std;

class X
{
	private:
	                int a;
	protected:
	                X () {cout<<" X constructor was called" << endl;}
	               ~ X () { cout <<"X destructor was called"<<endl;}
};
class Y:X
{
};

int main()
{
	Y m1;
}
