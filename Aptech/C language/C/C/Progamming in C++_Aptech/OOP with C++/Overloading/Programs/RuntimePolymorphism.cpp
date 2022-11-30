#include<iostream>
using namespace std;

class Employee
{
public:
    virtual void raiseSalary()
    {  /* common raise salary code */ 
	   cout<<"  Salary raised  ";
	}
 
    virtual void promote()
    { /* common promote code */ 	
	  cout<<"  Promotion for company ";
	}
};
 
class Manager: public Employee {
    virtual void raiseSalary()
    {  /* Manager specific raise salary code, may contain
          increment of manager specific incentives*/ 
		  cout<<"  Salary raised  ";
	}
 
    virtual void promote()
    { /* Manager specific promote */
	  cout<<"  Promotion for company ";
	}
};
 
// Similarly, there may be other types of employees
 
// We need a very simple function to increment salary of all employees
// Note that emp[] is an array of pointers and actual pointed objects can
// be any type of employees. This function should ideally be in a class 
// like Organization, we have made it global to keep things simple
void globalRaiseSalary(Employee *emp[], int n)
{
    for (int i = 0; i < n; i++)
        emp[i]->raiseSalary(); // Polymorphic Call: Calls raiseSalary() 
                               // according to the actual object, not 
                               // according to the type of pointer                                 
}
int main()
{
	cout<<"  Virtual Functions  ";
	Employee e;
	e.raiseSalary();
	return 0;
}


