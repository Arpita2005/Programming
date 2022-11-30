#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i=95,j=1005,k;
	k=i+j;
	cout<<setw(10)<<"First";
	cout<<setw(10)<<i<<endl;
	cout<<setw(10)<<"Second";
	cout<<setw(10)<<j<<endl;
	cout<<setw(10)<<"Total";
	cout<<setw(10)<<k<<endl;
	
	return 0;
}
