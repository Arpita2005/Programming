#include <iostream>
//#include <array>
using namespace std;

int main()
{
  int i=0,elem,myarray[3] = {10,20,30};

  for (int i=0; i<3; ++i)
    ++myarray[i];
  /*for (int elem : myarray)
    cout << elem << "\n";*/
   i=0;
   while(i<=2)
   {
   	  elem=myarray[i];
   	  cout<<elem<<endl;
   	  i++;   	  
   }
return 0;
}

