#include <iostream> 
#include<conio.h>
using namespace std;
// Base class  
//Simple or Single level inheritance
class Shape  
{
   public:
      void setWidth(int w) 
	  {
         width = w;
      }		
      void setHeight(int h) 
	  {
         height = h;
      }
		
   protected://base and derived protected is an object just like public and private
      int width;
      int height;
};

// Derived class
class Rectangle : public Shape 
{
   public:
      int getArea() 
	  { 
         return (width * height); 
      }
};

int main() 
{
   Rectangle Rect;
  
   Rect.setWidth(5);
   Rect.setHeight(7);
   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;
   //Rect.getArea();
getch();
   return 0;
}
