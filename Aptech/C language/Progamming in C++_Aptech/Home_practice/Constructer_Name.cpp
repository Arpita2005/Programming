#include<iostream>
#include<conio.h>
using namespace std;
class name
{
    public:
     string k;
     name()
    {
        cout<<"Enter your name:"<<endl;
        cin>>k;
    }
    void display()
    {
        cout<<"Name: "<<k<<endl;
    }
};
int main()
{
    name n;
    n.display();
    getch();
    return 0;
}
