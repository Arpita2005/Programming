#include <iostream>
#include <conio.h>
#include<stdlib.h>
using namespace std;
class student_workers_getData
{
    public:
//private:
    int age, total_number, subjects;
    char course[30], name[30], college[30];

//public:
    // getting details of students
    void student_getData()
    {
        cout << "Enter your name :\n ";
        fflush(stdin);
        cin>>name;
        cout << "Enter your college name :\n";
        fflush(stdin);
        cin>>college;
        cout << "Enter your course :\n ";
        fflush(stdin);
        cin>>course;
        cout << "Enter your total subjects : \n";
        fflush(stdin);
        cin >> subjects;
        cout << "Enter your total Number :\n";
        fflush(stdin);
        cin >> total_number;
    }

    // getting workers details
    void workers_getData()
    {
        cout << "Enter worker name :\n ";
        //gets(name);
        fflush(stdin);
        cin>>name;
        cout << "Enter where you work :\n ";
        //gets(college);
        fflush(stdin);
        cin>>college;
        cout << "Enter what you work :\n ";
        fflush(stdin);
        // gets(course);
        cin>>course;
        cout << "Enter your salary :\n";
        fflush(stdin);
        cin >> total_number;
    }
};
void decession_of_getData()
{
    int decide, number;
//    student_workers_getData getData[number];
    cout << "Workers or Student details get data " << endl;
    cout << "Who you are \n 0. Exit \n 1. Worker \n 2. Student \n Ans : ";
    cin >> decide;
    student_workers_getData getData[number];
    if (decide == 1)
    {
        cout << "Enter Workers details " << endl;
        cout << "How much Workers are there? \n Ans : ";
        cin >> number;
        for (int i = 0; i < number; i++)
        {
            cout<<"Showing the details of Workers: "<<i+1<<endl;
            getData[i].workers_getData();
        }
    }
    else if (decide == 2)
    {
        cout << "Enter student details " << endl;
        cout << "How much students are there? \n Ans : ";
        cin >> number;
        for (int i = 0; i < number; i++)
        {
            cout<<"Showing the details of student: "<<i+1<<endl;
            getData[i].student_getData();
        }
    }
    else(decide==0);
    {
        cout<<"Enter any key to exit :)\n";
    }
}
int main()
{
    // Code
    decession_of_getData();
    getch();
    return 0;
}