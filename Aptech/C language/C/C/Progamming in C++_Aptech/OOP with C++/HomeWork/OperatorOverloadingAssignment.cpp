#include <iostream>
using namespace std;

class Test
{
   private:
      int count;

   public:
       Test(): count(8){}

       void operator *() 
       { 
          count = count / 2; 
       }
       void operator +() 
       { 
          count = count * 4; 
       }
       void Display() { cout<<"Count: "<<count<<endl; }
};

int main()
{
    Test t;
    // this calls "function void operator ++()" function
    *t;    
    t.Display();
    
    Test t1;
    +t1;    
    t1.Display();
    return 0;
}
