//Example of Overloading Template Function
// C++ program to overload template function for sum of numbers.
#include <iostream>
#include <conio.h>
using namespace std;

template<class t1>
void sum(t1 a,t1 b,t1 c)
{
    cout<<"Template function 1: Sum = "<<a+b+c<<endl;
}

template <class t1,class t2>
void sum(t1 a,t1 b,t2 c)
{
    cout<<"Template function 2: Sum = "<<a+b+c<<endl;
}

void sum(int a,int b)
{
    cout<<"Normal function: Sum = "<<a+b<<endl;
}

int main()
{
    int a,b;
    float x,y,z;
    cout<<"Enter two integer data: ";
    cin>>a>>b;
    cout<<"Enter three float data: ";
    cin>>x>>y>>z;
    sum(x,y,z); // calls first template function
    sum(a,b,z); // calls first template function
    sum(a,b); // calls normal function
    getch();
    return 0;
}
