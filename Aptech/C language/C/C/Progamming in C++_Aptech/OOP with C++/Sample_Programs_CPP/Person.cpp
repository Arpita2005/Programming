#include<iostream>
using namespace std;

class Person
{
	public:
		string name;
		int age;
		
		void setData(string n,int a);
		void getData();
	
};
//  ::   ->  Scope Resolution operator
void Person::setData(string n,int a)
{
	name=n;
	age=a;
}
void Person::getData()
{
	cout<<"\n Name=  "<<name<<"  \n  Age=  "<<age<<endl;
}

int main()
{
	string x;
	int y;
	Person p;
	//  p is the object of Person class
	cout<<" Enter your name:";
	cin>>x;
	fflush(stdin);
	cout<<"  Enter your age:  ";
	cin>>y;
	
	p.setData(x,y);
	p.getData();
	
	return 0;
}
