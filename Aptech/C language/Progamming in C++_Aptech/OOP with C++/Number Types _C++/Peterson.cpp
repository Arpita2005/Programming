#include<iostream>
using namespace std;
int main()
{
	int f,i,j,n,sum=0,c,rem;
	cout<<"The Peterson/Krishnamurthy Numbers are:  \n"<<endl;
	for(i=1;i<=20000;i++)
	{
		c=i;
		while(c!=0)
		{
			f=1;
			rem=c%10;
			for(j=rem;j>=1;j--)
			  f=f*j;
			sum+=f;
			c=c/10;
		}	
		if(i==sum)
		  	cout<<i<<endl;
		sum=0;
	}
	
	return 0;
	
}
