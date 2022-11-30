#include <iostream>
using namespace std;

class Test
{
   private:
      int count;
   public:
       Test(): count(5){}

       void operator ++() 
       { 
          count = count+10; 
       }
       void operator --() 
       { 
          count = count-5; 
       }
       void Display() { cout<<"\nCount: "<<count; }
};

int main()
{
    Test t;
    // this calls "function void operator ++()" function
    ++t;    
    t.Display();
    --t;    
    t.Display();
    return 0;
}
