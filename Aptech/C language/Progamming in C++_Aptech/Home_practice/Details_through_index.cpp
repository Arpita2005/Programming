/*
    WAP to ask user which student data you waana see only print that student value
    if user enter 3 then index will be 2 or the value will be shown 2
    */
#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    
    public:
    string name,school_name,Course;
    int age,total,roll;
    void personal_data()
    {
        cout<<"Enter your name:"<<endl;
        cin>>name;
        cout<<"Enter your school name:"<<endl;
        cin>>school_name;
        cout<<"Enter your Course:"<<endl;
        cin>>Course;
        cout<<"Enter your age:"<<endl;
        cin>>age;
        cout<<"Enter your roll:"<<endl;
        cin>>roll;
        cout<<"Enter your total number:"<<endl;
        cin>>total;
    }
    void display()
    {
        
        cout<<"Your name is:"<<name<<endl;
        cout<<"Your school name is:"<<school_name<<endl;
        cout<<"Your course is:"<<Course<<endl;
        cout<<"Your age is:"<<age<<endl;
        cout<<"Your roll is:"<<roll<<endl;
        cout<<"Your total is:"<<total<<endl;
    }
   
};
int main()
{
    
    int i,number,person_number;
    cout<<"Enter the number of student  to see their details:"<<endl;
    cin>>number;
    student s[number];
    
    for(i=0;i<number;i++)
    {
        cout<<"Enter the details of student: "<<i+1<<endl;
        s[i].personal_data();

    }
    for(i=0;i<number;i++)
    {
        cout<<"Showing the details of student: "<<i+1<<endl;
        s[i].display();
    }
    
    cout<<"Enter the number of whom you wanna see the details:\n";
    cin>>person_number;
    person_number=person_number-1;
    s[person_number].display();
    
    getch();
    return 0;
}
 