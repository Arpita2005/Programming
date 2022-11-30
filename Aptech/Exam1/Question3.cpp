#include<iostream>
using namespace std;
#include<conio.h>
class first
{
    public:
    int one;
    void total()
    {
        cout<<"Enter your First integer:\n";
        cin>>one;
    }
    void display()
    {
        cout<<"Your number is:"<<one<<endl;;
    }
};
class second
{
    public:
    int two;
    void add()
    {
        cout<<"Enter your second integer:\n";
        cin>>two;
    }
    void show()
    {
        cout<<"Your second integer is:"<<two<<endl;
    }
};

int add(first a,second b)
{
    return (a.one+b.two);
}
int main()
{
    first f;
    second s;
    f.total();
    f.display();
    s.add();
    s.show();
    cout<<"Your final resullt is:"<<add(f,s);
    getch();
    return 0;
}
