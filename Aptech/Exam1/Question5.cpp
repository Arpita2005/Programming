#include<iostream>
using namespace std;
#include<conio.h>

template <typename first>
void multiplication(first e,first f,first g)
{
         cout<<"1st function using template:"<<e*f*g<<endl;
}

template <typename first>
void multiplication(first a,first b,first c,first d)
{
     cout<<"2nd function using template:"<<a*b*c*d<<endl;
}
int main()
{
    int a,b,c,d;
    float e,f,g;
    cout<<"Enter four integer value for result:\n";
    cin>>a>>b>>c>>d;
    cout<<"Enter three integer value for result:\n";
    cin>>e>>f>>g;
    multiplication(a,b,c,d);
    multiplication(e,f,g);
    getch();
    return 0;

}