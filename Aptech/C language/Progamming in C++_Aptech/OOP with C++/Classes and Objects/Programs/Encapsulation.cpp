#include<iostream>
#include<conio.h>
using namespace std;

class Adder
{
   public:
      // Parameterized constructor
      Adder(int i = 0) 
	  {      	
         total = i;
      }		
      // interface to outside world
      void addNum(int number) 
	  {   
         total += number;
         //total=total+number
      }		
      // interface to outside world
      int getTotal() 
	  {
         return total;
      };
		
   private:
      // hidden data from outside world
      int total;
};

int main() 
{
   //Create the object of class Adder . a is the object of class Adder
   Adder a; 
   
   a.addNum(10);  
   a.addNum(20);  
   a.addNum(30);  

   cout << "Total =  " << a.getTotal() <<endl;
   getch();
   return 0;
}
