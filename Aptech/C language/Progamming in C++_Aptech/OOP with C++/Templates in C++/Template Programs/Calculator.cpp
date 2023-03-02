//Simple calculator using Class template
//Program to add, subtract, multiply and divide two numbers using class template
#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
class Calculator
{
private:
	T num1, num2;	
public:
	Calculator(T n1, T n2)
	{
		num1 = n1;
		num2 = n2;
	}	
	void displayResult()
	{
		cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
		cout << "Addition is: " << add() << endl;
		cout << "Subtraction is: " << subtract() << endl;
		cout << "Product is: " << multiply() << endl;
		cout << "Division is: " << divide() << endl;
	}	
	T add() { return num1 + num2; }
	
	T subtract() { return num1 - num2; }
	
	T multiply() { return num1 * num2; }
	
	T divide() { return num1 / num2; }
};

int main()
{
  int a,b;
  float c,d;
	cout<<"Enter the first Number :\n"<<endl;
	cin>>a;
	cout<<"Enter the second Number :\n"<<endl;
	cin>>b;
	cout<<"\n\n"<<endl;
    cout<<"Enter the first Number (in decimal):\n"<<endl;
	cin>>c;
	cout<<"Enter the second Number (in decimal) :\n"<<endl;
	cin>>d;
	Calculator<int> intCalc(a,b);
	Calculator<float> floatCalc(c,d);
	
	cout << "Int results:" << endl;
	intCalc.displayResult();
	
	cout << endl << "Float results:" << endl;
	floatCalc.displayResult();
	getch();
	return 0;
}

