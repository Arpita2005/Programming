#include<iostream>
#include<string.h>
using namespace std;

class person
{
  public:
    char name[20];
    int id;
    void getdetails()
	{
		cout<<"Name:   "<<name<<endl;
		cout<<"Id:  "<<id<<endl;
	}
}; 
int main()
{
   person p1; //p1 is an object 
   strcpy(p1.name,"Dia Bhattacharya");
   p1.id=101;
   p1.getdetails();
   return 0;
   
}
