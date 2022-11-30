#include <iostream>
using namespace std;

int factorial(int);

int main() 
{
    int n;
    cout<<"Enter a number to find factorial: (-1 represents undefined ) ";
    cin >> n;
    cout << "Factorial of " << n <<" = " << factorial(n);
    return 0;
}

int factorial(int n) 
{
    if (n==0) 
      return 1;
    else if(n<0)
      return -1;
    else
       return n*factorial(n-1);
}

