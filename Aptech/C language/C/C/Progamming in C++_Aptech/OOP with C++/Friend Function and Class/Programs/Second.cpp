/* C++ program to demonstrate the working of friend function.*/
#include<iostream>
using namespace std;

class Distance
{
    private:
        int meter;
    public:
        //Distance(): meter(0) {}
        Distance()
		{
			meter=0;
		}
		Distance(int x)
		{
			meter=x;
		}
        //friend function
        friend int addFive(Distance);
};
// friend function definition
int addFive(Distance d)
{
    //accessing private data from non-member function
    d.meter += 5;
    return d.meter;
}
int main()
{
    Distance D;
    Distance D1(10);
    
    cout<<"Distance: "<< addFive(D)<<endl;
    cout<<"Distance: "<< addFive(D1);
    return 0;
}

