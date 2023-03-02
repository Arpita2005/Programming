#include<iostream>
#include<conio.h>
using namespace std;
 
template<class T, class U = char>
class A  
{
	public:
	    T x;
	    U y;
	    A() {   cout<<"Constructor Called"<<endl;   }
};
 
int main()  
{
   A<char> a;  // This will call A<char, char>   
   getch();
   return 0;
}
