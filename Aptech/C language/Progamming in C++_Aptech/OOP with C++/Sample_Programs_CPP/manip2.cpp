#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float i=95.32,j=1005.98,k;
	k=i+j;
	cout<<setw(10)<<"First  ";
	cout<<setprecision(9)<<i<<endl;
	cout<<setw(10)<<"Second  ";
	cout<<setprecision(9)<<j<<endl;
	cout<<setw(10)<<"Total  ";
	cout<<setprecision(9)<<k<<endl;
	
	return 0;
}
