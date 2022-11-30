#include<iostream>
using namespace std;

class Example 
{
	 public: // all declarations after this point are public
	    void add(int x) 
		{ // member "add" has public access
	        n += x; // OK: private Example::n can be accessed from Example::add
	    }
	 	int getN()
	 	{
	 		return n;
	 	}
	 private: // all declarations after this point are private
	    int n = 0; // member "n" has private access
};
int main()
{
	    Example e;
	    e.add(10); // OK: public Example::add can be accessed from main
	    //e.n = 7;  // Error: private Example::n cannot be accessed from main
	    cout<<"   The value of n:=  "<<e.getN()<<endl;
	    e.add(20); // OK: public Example::add can be accessed from main
	    //e.n = 7;  // Error: private Example::n cannot be accessed from main
	    cout<<"   The value of n:=  "<<e.getN()<<endl;
	    e.add(30); // OK: public Example::add can be accessed from main
	    //e.n = 7;  // Error: private Example::n cannot be accessed from main
	    cout<<"   The value of n:=  "<<e.getN()<<endl;
}
