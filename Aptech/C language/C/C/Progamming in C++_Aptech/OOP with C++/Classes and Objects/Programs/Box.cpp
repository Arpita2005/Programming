#include <iostream>
using namespace std;
/* Create a Box class with members length,breadth and height . Create two
 Objects of Box class and set the separate dimensions . Then print the volumes
 of two Boxes (two Box objects ). 
*/
class Box 
{
   public:
      double length,breadth,height;   // Length,Breadth & Height of a box
};

int main() 
{
   Box Box1,Box2;        // Declare Box1 & Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here 
   // box 1 specification
   Box1.height = 5.0; 
   Box1.length = 6.0; 
   Box1.breadth = 7.0;
   // box 2 specification
   Box2.height = 10.0;     
   Box2.length = 12.0;
   Box2.breadth = 13.0;	
   // volume of box 1
   volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Volume of Box1 : " << volume <<endl;
   // volume of box 2
   volume = Box2.height * Box2.length * Box2.breadth;
   cout << "Volume of Box2 : " << volume <<endl;
	
   return 0;
}
