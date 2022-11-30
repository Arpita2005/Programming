#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0,c,rem;
	cout<<"The Armstrong Numbers are:  \n"<<endl;
	for(i=1;i<=10000;i++)
	{
		c=i;
		while(c!=0)
		{
			rem=c%10;
			sum+=rem*rem*rem;
			c=c/10;
		}	
		if(i==sum)
		  	cout<<i<<endl;
		sum=0;
	}


	
	return 0;
	
}
