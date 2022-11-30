#include <iostream>
#include<conio.h>
using namespace std;
#define WIDTH 5
#define HEIGHT 3

int jimmy[HEIGHT][WIDTH];
int n,m,j;

int main ()
{
  for (n=0; n<HEIGHT; n++)
  {
    for (m=0; m<WIDTH; m++)
    {
      jimmy[n][m]=(n+1+m-1);//(n+1)*(m+1)
    }
  }
    cout<<"  The array is:  "<<endl;
    for (n=0; n<HEIGHT; n++)
    {
    	for (m=0; m<WIDTH; m++)
    	{
          cout<<  jimmy[n][m]<<"\t"<<endl;
    	}
    }
  getch();
}

