#include<iostream>
using namespace std;
#include<conio.h>
class Box
{
    public:
    float volume;
    double length,breadth,width;

    void length()
    {
        cout<<"Enter your box's length:\n";
        cin>>length;
    }
    void length_show()
    {
        cout<<"Your box's length is:"<<length<<endl;
    }
    void width()
    {
        cout<<"Enter the box's width:\n";
        cin>>width;
    }
    void width_show()
    {
        cout<<"Your box's width is:"<<width<<endl;
    }
    void breadth()
    {
        cout<<"Enter the box's breadth:\n";
        cin>>breadth;
    }
    void breadth_show()
    {
        cout<<"Your box's breadth is:"<<breadth<<endl;
    }

   int volume1(Box a,Box b,Box c)
{
    return(a.length+b.width+c.breadth);
};
// int volume2(box p,box q,box r)
// {
//     return(p.length+q.width+r.breadth);
// }
int main()
{
    Box b1;
    int i;
    for(i=0;i<2;i++)
    {
        cout<<"The volume is:"<<endl;
        b1.volume1();
    }
    
    
    
    
    // box b1;
    // box b2;
    // b1.length();
    // b1.length_show();
    // b1.width();
    // b1.width_show();
    // b1.breadth();
    // b1.breadth_show();
    // cout<<"The volume is:"<<volume1(b1,b1,b1);

    getch();
    return 0;
}
