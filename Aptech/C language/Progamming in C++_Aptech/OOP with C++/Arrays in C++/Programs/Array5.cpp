#include <iostream>
#include<conio.h>
//#include <array>
using namespace std;

int main()
{
  int i=0,elem,myarray[3] = {10,20,30};

  for (i=0; i<3; ++i)
   ++myarray[i];
  //  myarray[i]=myarray[i]+5;
  /*for (int elem : myarray)
    cout << elem << "\n";*/
   i=0;
   while(i<=2)
   {
   	  elem=myarray[i];
   	  cout<<elem<<endl;
   	  i++;   	  
   }
   getch();
return 0;
}

