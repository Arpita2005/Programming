#include<iostream>
using namespace std;
//Multilevel Inheritance 
class person
{
    char name[100],gender[10];
    int age;
    public:
        void getdata()
        {
            cout<<"Name: ";
            fflush(stdin);  /*clears input stream*/
            gets(name);
            cout<<"Age: ";
            cin>>age;
            cout<<"Gender: ";
            fflush(stdin);  /*clears input stream*/
            cin>>gender;
        }
        void display()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Gender: "<<gender<<endl;
        }
};

class employee: public person
{
    char company[100];
    float salary;
    public:
        void getdata()
        {
            person::getdata();
            cout<<"Name of Company: ";
            fflush(stdin);
            gets(company);
            cout<<"Salary: Rs.";
            cin>>salary;
        }
        void display()
        {
            person::display();
            cout<<"Name of Company: "<<company<<endl;
            cout<<"Salary: Rs."<<salary<<endl;
        }
};

class programmer: public employee
{
    int number;
    public:
        void getdata()
        {
            employee::getdata();
            cout<<"Number of programming language known: ";
            cin>>number;
        }
        void display()
        {
            employee::display();
            cout<<"Number of programming language known: "<<number;
        }
};

int main()
{
    programmer p;
    cout<<"Enter data"<<endl;
    p.getdata();
    cout<<endl<<"Displaying data"<<endl;
    p.display();
    
    return 0;
}
