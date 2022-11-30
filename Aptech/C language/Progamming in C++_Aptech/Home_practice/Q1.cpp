//WAP to add two numbers
#include<iostream>
#include<conio.h>
using namespace std;
class add
{
    private:
    int a,b,c;
    public:
    void sum()
    {
        cout<<"Value of A and B are::"<<endl;
        cin>>a>>b;
        c=a+b;
        cout<<"Result is:"<<c<<endl;
    }
};
int main()
{
    add a;
    a.sum();
    getch();
    return 0;
}

