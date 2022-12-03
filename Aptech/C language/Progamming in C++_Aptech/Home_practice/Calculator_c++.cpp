#include<iostream>
#include<conio.h>
using namespace std;
class Calculator
{
    public:
    int num1,num2,result;
    void addition()
    {
        cout<<"Addition\n";
        cout<<"Enter the First Number:\n";
        cin>>num1;
        cout<<"Enter the Second Number:\n";
        cin>>num2;
        result=num1+num2;
        cout<<"The result is:"<<result;
    }
    void Subtraction()
    {
        cout<<"Subtraction\n";
        cout<<"Enter the First Number:\n";
        cin>>num1;
        cout<<"Enter the Second Number:\n";
        cin>>num2;
        result=num1-num2;
        cout<<"The result is:"<<result;
    }
    void Multiplication()
    {
        cout<<"Multiplication\n";
        cout<<"Enter the First Number:\n";
        cin>>num1;
        cout<<"Enter the Second Number:\n";
        cin>>num2;
        result=num1*num2;
        cout<<"The result is:"<<result;
    }
    void Division()
    {
        cout<<"Division\n";
        cout<<"Enter the First Number:\n";
        cin>>num1;
        cout<<"Enter the Second Number:\n";
        cin>>num2;
        result=num1/num2;
        cout<<"The result is:"<<result;
    }
    void Modulation()
    {
        cout<<"Modulation\n";
        cout<<"Enter the First Number:\n";
        cin>>num1;
        cout<<"Enter the Second Number:\n";
        cin>>num2;
        result=num1%num2;
        cout<<"The result is:"<<result;
    }

};
int main()
{
    Calculator c;
    int decide;
    cout<<"My first Calculator in C++"<<endl;
    cout<<"Enter What do you want to do ?\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulation\n"<<endl;;
    cout<<"==============================="<<endl;
    cin>>decide;
    if(decide==1)
    {
        c.addition();
    }
    else if(decide==2)
    {
         c.Subtraction();
    }
    else if(decide==3)
    {
        c.Multiplication();
    }
    else if(decide==4)
    {
        c.Division();
    }
    else if(decide==5)
    {
        c.Modulation();
    }
    else
    {
        cout<<"Sorry you have wrong information"<<endl;
    }
    getch();
}


