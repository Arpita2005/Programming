#include<iostream>
#include<conio.h>
using namespace std;
/* A destructor is a member function that is invoked automatically when the object goes out 
of scope or is explicitly destroyed by a call to delete . A destructor has the same name as 
the class, preceded by a tilde ( ~ ). */
class DestructorDemo
{
	public:
		DestructorDemo()
		{
			cout<<"Object is created"<<endl;
		}
		~DestructorDemo()
		{
			cout<<"Object is destroyed"<<endl;
		}
		int a()
		{
			cout<<"ABC"<<endl;
		}
};

int main()
{
	DestructorDemo d1;
	getch();
	return 0;
}
