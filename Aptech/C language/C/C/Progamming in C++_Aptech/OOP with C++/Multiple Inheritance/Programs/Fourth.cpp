#include<iostream>
using namespace std;

class Person 
{
	public:
	    Person(int x)  
		{ 
			cout << "I am Person" << endl;   
		}
	    Person()     
		{ 
			cout << "I am Person - 2" << endl;   
		}
};
 
class Faculty : virtual public Person 
{
	public:
	    Faculty(int x):Person(x)   
		{
	       cout<<"I am Faculty "<< endl;
	    }
}; 
 
class Student : virtual public Person 
{
	public:
	    Student(int x):Person(x) 
		{
	        cout<<"I am Student"<< endl;
	    }
};
 
class TA : public Faculty, public Student  
{
	public:
	    TA(int x):Student(x), Faculty(x)   
		{
	        cout<<"I am Asst. Teacher"<< endl;
	    }
};
 
int main()  
{
    TA ta1(30);
    
    return 0;
}

