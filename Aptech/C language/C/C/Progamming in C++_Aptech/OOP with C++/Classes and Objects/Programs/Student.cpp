#include<iostream>
using namespace std;

class Student   //Class Definition
{
   public:  
      int rollno;
      int marks;
         
      void show()
      {
          cout<<"Roll No:= "<<rollno<<" , Marks:="<< marks;
      }
};
int main()
{
    Student s;   //Object of Class   
    s.rollno=1;
    s.marks=90;
    s.show();
}
