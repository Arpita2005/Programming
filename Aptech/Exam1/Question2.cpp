#include<iostream>
using namespace std;
#include<stdlib.h>
#include<conio.h>
class Student
{
    public:
    char name[50];
    int roll,marks,i;

    void runtime_input()
    {
            cout<<"Enter your name:\n";
            fflush(stdin);
            gets(name);
            cout<<"Enter your roll:\n";
            cin>>roll;
            cout<<"Enter your marks:\n";
            cin>>marks;  
    }
    void display()
    {
        cout<<"Your Name is:"<<name<<endl;
        cout<<"Your roll is:"<<roll<<endl;
        cout<<"Your marks is:"<<marks<<endl;
    }
};
int main()
{
    Student s;
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"Number:"<<i+1<<endl;
        s.runtime_input();
        s.display();
    }
    getch();
    return 0;
}