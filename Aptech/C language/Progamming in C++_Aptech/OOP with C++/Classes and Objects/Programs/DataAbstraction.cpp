#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
	// hidden data from outside world
	private: 
		int a,b,c;
	public:		
		void add()
		{
			cout<<"Enter any two numbers: ";
			cin>>a>>b;
			c=a+b;
			cout<<"Sum:=   "<<c;
		}
};
int main()
{
	sum s;
	s.add();
	getch();
	return 0;
}
