// Source Code to demonstrate the working of overloaded constructors and copy constructor
#include <iostream>
using namespace std;

class Area
{
    private:
       int length;
       int breadth;

    public:
       // Constructor with no arguments
       Area(): length(5), breadth(2) { }
       // Constructor with two arguments
       Area(int l, int b): length(l), breadth(b){ }

       int AreaCalculation() 
	   {  
	   		return length * breadth;  
	   }

       void DisplayArea(int temp)
       {
           cout << "Area: " << temp << endl;
       }
};

int main()
{
    Area A1, A2(2, 1),A3;
    int temp;

    cout << "Default Area when no argument is passed." << endl;
    temp = A1.AreaCalculation();
    A1.DisplayArea(temp);

    cout << "Area when (2,1) is passed as argument." << endl;
    temp = A2.AreaCalculation();
    A2.DisplayArea(temp);
    
    // Copy constructor
    A3=A2;
    temp = A3.AreaCalculation();
    A3.DisplayArea(temp);
    
     // Copy constructor
    Area A4(A3);
    temp = A4.AreaCalculation();
    A4.DisplayArea(temp);
    
    return 0;
}
