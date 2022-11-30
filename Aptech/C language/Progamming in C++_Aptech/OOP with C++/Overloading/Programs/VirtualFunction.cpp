#include<iostream>
#include<conio.h>
using namespace std;
  
class Base
{
    public:
    virtual void show() { cout<<" In Base \n"; }
};
  
class Derived: public Base
{
   public:
    void show() { cout<<"In Derived \n"; }
};
  
int main(void)
{
    Base *bp = new Derived;
    bp->show();  // RUN-TIME POLYMORPHISM
    getch();
    return 0;
}

//Output:

//In Derived