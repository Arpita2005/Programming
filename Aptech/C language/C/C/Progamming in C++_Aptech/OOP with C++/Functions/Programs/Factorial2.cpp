#include <iostream>
using namespace std;

int factorial(int);

int main() 
{
    int n;
    cout<<"Enter a number to find factorial: ";
    cin >> n;
    cout << "Factorial of " << n <<" = ";
	if(n>=0)
	  cout<<factorial(n);
	else
	  cout<<"Undefined";
	 
    return 0;
}

int factorial(int n) 
{
    int x;
	if (n==0) 
      x=1;
    else if(n<0)
      x=-1;
    else
      x=n*factorial(n-1);
    
    return x;
}

