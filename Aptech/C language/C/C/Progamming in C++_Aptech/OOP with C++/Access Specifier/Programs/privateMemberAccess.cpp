#include<iostream>
using namespace std;

class S 
{
 private:
    int n; // S::n is private
 public:
    S() : n(10) {} // this->n is accessible in S::S
    S(const S  &other) : n(other.n+100) {} // other.n is accessible in S::S
    void printN()
	{
		cout<<"  n:=    "<<n;
	}
};
int main()
{
	S s1;
	s1.printN(); // 10	
	cout<<endl;
	
	S s2(s1);
	s2.printN();	//110
	cout<<endl;
	
	S s3(s1);
	s3.printN(); // 110	
	cout<<endl;
	
	S s4(s2);
	s4.printN();	//  210
	
    return 0;
	
}
