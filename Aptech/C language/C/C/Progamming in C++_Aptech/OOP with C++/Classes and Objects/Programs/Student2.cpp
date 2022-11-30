#include<iostream>
using namespace std;

class Student   //Class Definition
{
   public: 
      //string name; 
      char name[50];
	  int rollno;
      int marks;
      
      void getData()
      {
      	cout<<"Enter Name:   ";
      	fflush(stdin);
      	gets(name);
		cout<<"Enter Rollno:   ";
      	cin>>rollno;
      	cout<<"Enter Marks:   ";
      	cin>>marks;      	
	  }
      void show()
      {
          cout<<"Name:=  "<<name<<",  Roll No:= "<<rollno<<" and  Marks:=  "<< marks;
      }
};
int main()
{
   Student s;   //Object of Class
   s.getData();
   s.show();
   
   return 0;
}
