#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int result,n1=0,n2=1,i,number;
    cout<<"Enter the number:\n";
    cin>>number;
    cout<<"Fibonacci series is:"<<n1<<n2<<endl;
    for(i=0;i<number-2;i++)
    {
        if(number>0)
        {
    result=n1+n2;
    n1=n2;
    n2=result;
    cout<<" "<<result;
    }
    }
   
    getch();
    return 0;

}
