#include<iostream>
using namespace std;

class MyClass
{
	public:
		static int counter;
		//static int count;
		MyClass()
		{
			counter++;
		}
		static void show()
		{
			cout<<" \nNo of objects :=  "<<counter;
			//count++;
		}
	
};
int MyClass::counter=0;
//int MyClass::count=0;
//scope resolution operator  ->  ::
int main()
{
	MyClass  m1;
	MyClass  m2;
	MyClass  m3;
	MyClass  m4;
	MyClass  m5;
	MyClass  m6;
	MyClass  m7;
	MyClass  m99;
	
	MyClass::show();

	return 0;
	
}
