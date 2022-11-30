#include <iostream>
using namespace std;

class Test
{
   private:
      int count;

   public:
       Test(): count(5){}

       void operator *() 
       { 
          count = count*10; 
       }
       void Display() { cout<<"Multiplication in operator overloading: "<<count<<endl; }
};
class Test1
{
	private:
		int count1;
	public:
		
	   Test1(): count1(30){}

       void operator +() 
       { 
          count1 = count1/10; 
       }
       void Display1() { cout<<"Division in operator overloading: "<<count1; }
};

int main()
{
    Test t;
    Test1 p;
    *t;    
    +p;
    t.Display();
    p.Display1();
    return 0;
}
