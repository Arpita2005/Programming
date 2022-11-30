#include<iostream>
using namespace std;
/* programer name-sujit sharma
   course-bca 3rd sem; */
class taxpayer{
	    int pan;
	    char name[20];
	  double tableinc;
	    float tax;
	    public:
	    void inputdata();
	    void display();
	    double computetax();
    };
void taxpayer::inputdata()
    {
	    cout<<"enterpersonal acct num:";
	    cin>>pan;    
	    cout<<"\nenter total annual taxable income:"<<endl;
	    cin>>tableinc;
	    fflush(stdin);
	    cout<<"\nenter the name of the person:"<<endl;
	    gets(name);
    }
double taxpayer::computetax()
    {
	    if(tableinc<=60000)
	    	tax=0;
	    else if((tableinc>60000)||(tableinc<=150000))
	    	tax= tableinc *0.05;
	    else if(tableinc>150000||tableinc<=500000)
	    	tax=tableinc*0.1;
	    else
	    	tax=tableinc*0.15;
	    return (tax);
    }

void taxpayer::display()
    {
	    cout<<"\npan num:"<<pan;
	    cout<<"\tname:"<<endl;
	    puts(name);
	    cout<<"\ttotal annual income:"<<tableinc;
	    cout<<"\tTax payable:"<<tax;
    }
int main()
{
	taxpayer a;
	a.inputdata();
	a.computetax();
	a.display();
	return 0;
}
   
   
