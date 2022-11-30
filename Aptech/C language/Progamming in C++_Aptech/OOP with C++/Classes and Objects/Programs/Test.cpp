#include<iostream>
using namespace std;
#include<conio.h>

class Test
{
    private:
        int data1;
        float data2;  

    public:  
        void function1()
        {   data1 = 2;
		    cout<<"Data1:    "<<data1;
	    } 

        float function2()
        { 
            data2 = 3.5;
            return data2;
        }
};

int main()
{
    Test o1, o2;
    cout<<" 1 st object :  "<<o1.function2();
    cout<<"\n 2 nd object :  "<<o2.function2();
    
    cout<<endl;
	o1.function1();
	cout<<endl;
    o2.function1();
    getch();
    return 0;
}
