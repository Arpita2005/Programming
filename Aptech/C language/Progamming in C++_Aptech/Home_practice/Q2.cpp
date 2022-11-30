#include<iostream>
#include<conio.h>
using namespace std;
class even
{
    private:
    int n;
    public:
   void print_even()
{
    cout<<"Your even numbers from 1 to 10 are:\n";
    for(n=1,n<=10,n++)
    {
        if(n%2!=0)
        {
        cin>>n>>endl;
        }
    }
}
};
int main()
{
    even k;
    k.print_even();
    getch();
    return 0;
}