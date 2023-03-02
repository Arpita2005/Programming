#include<iostream>
using namespace std;
#include<conio.h>
template<class T, class U>
class A  
{
     T x;
     U y;
  public:
     A(T a,U b) 
	 {
	 	cout<<"Constructor Called  "<<endl;   
	 	x=a;
	 	y=b;
	 }
     void print()
     {
     	cout<<x<<"  and  "<<y<<endl;
	 }
};
 
int main()  
{
   A<char, char> a('p','q');
   a.print();
   
   A<int, double> b(101,994.3467);
   b.print();
   
   A<char, double> c('M',1000.23343);
   c.print();
   getch();
   return 0;
}
