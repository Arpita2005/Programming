#include<iostream>
#include<conio.h>
using namespace std;

class Addition
{
	public:
		// Overloaded functions 
		void sum(int a, int b)
		{
			cout<<a+b;
		}
		void sum(int a, int b, int c)
		{
			cout<<a+b+c;
		}
};
int main()
{
	Addition obj;
	obj.sum(10, 20);
	cout<<endl;
	obj.sum(10, 20,30);
	getch();
	//
	return 0;
}
