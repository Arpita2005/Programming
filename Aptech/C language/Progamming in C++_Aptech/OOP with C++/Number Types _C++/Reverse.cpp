#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,c,rem;
	cout<<"Enter the number:  ";
	cin>>n;
	c=n;
	while(c!=0)
	{
		rem=c%10;
		rev=rev*10+rem;
		c=c/10;
	}
	cout<<"  The reverse no of "<<n<<"  is "<<rev;
	
	return 0;
	
}
