#include<iostream>
#include<conio.h>
using namespace std;
class declare
{
    private:
     int a= 30;
     public:
     int b= 40; 
      protected:
      int c= 50;
      public:
      void call()
      {
        cout<<"Declaration of all numbers"<<endl;
        cout<<"Value of a is:\n"<<a<<endl;
        cout<<"Value of b is:\n"<<b<<endl;
        cout<<"Value of c is:\n"<<c<<endl;   
      }
};

    class name: public declare
{
    public:
    void call()
    {
    cout<<"value of b: "<<b<<endl;
    cout<<"value of c: "<<c<<endl;
    }
};
int main()
{
    declare d;
    d.call();

    name n;
    n.call();

    cout<<"value of b is: \n"<<d.b<<endl;
    getch();
}
