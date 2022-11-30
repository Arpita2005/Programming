// keyword_protected.cpp
// compile with: /EHsc
#include <iostream>
#include<conio.h>
using namespace std;
class X 
{
	public:
	   void setProtMemb( float i )
       {
         m_protMemb = i;
       }
	   void Display()
       {cout << m_protMemb << endl; }
	protected:   //protected type can be access in this class and another class not in main
               //protected can not be accessed to main directly it can be call on main inherit by other class 

	   float m_protMemb;
	   void Protfunc() { cout << "\nAccess allowed\n"; }
} x;

class Y : public X 
{
	public:
	   void useProtfunc() 
      { Protfunc(); }
} y;

int main() 
{
   // x.m_protMemb;         error, m_protMemb is protected
   x.setProtMemb( 0 );   // OK, uses public access function
   x.Display();
   y.setProtMemb( 5 );   // OK, uses public access function
   y.Display();
   // x.Protfunc();         error, Protfunc() is protected
   y.useProtfunc();
         // OK, uses public access function
                        // in derived class
   x.setProtMemb(100.45);
   x.Display();
   getch();
}
