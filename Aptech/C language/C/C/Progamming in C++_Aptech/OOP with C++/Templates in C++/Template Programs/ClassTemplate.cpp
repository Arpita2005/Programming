// C++ program to use class template
#include <iostream>
using namespace std;
template<class t1,class t2>

class sample
{
    t1 a;
    t2 b;
    public:
        void getdata()
        {
            cout<<"Enter a and b: ";
            cin>>a>>b;
        }
        void display()
        {
            cout<<"Displaying values"<<endl;
            cout<<"a="<<a<<endl;
            cout<<"b="<<b<<endl;
        }
};

int main()
{
    sample<int,int> s1;
    sample<int,char> s2;
    sample<int,float> s3;
    cout <<"Two Integer data"<<endl;
    s1.getdata();
    s1.display();
    cout <<"Integer and Character data"<<endl;
    s2.getdata();
    s2.display();
    cout <<"Integer and Float data"<<endl;
    s3.getdata();
    s3.display();

    return 0;
}
