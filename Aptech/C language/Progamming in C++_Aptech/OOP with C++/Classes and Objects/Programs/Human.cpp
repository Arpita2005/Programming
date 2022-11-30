#include<iostream>
#include<conio.h>
using namespace std;

class Human
{
	int head;
	int leg;
	public:
		void getHead()
		{
			cout<<" Enter no of heads: ";
			cin>>head;
		}
		void printHeadAndLegs()
		{
			cout<<" No of heads:=  "<<head<<endl;
			leg=head*2;
			cout<<" No of legs:=  "<<leg<<endl;
		}
};
int main()
{
	Human h;
	h.getHead();
	h.printHeadAndLegs();
	getch();
	
	return 0;
}
