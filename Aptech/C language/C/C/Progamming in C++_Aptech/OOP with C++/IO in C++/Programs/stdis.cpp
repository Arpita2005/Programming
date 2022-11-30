#include <iostream> 
using namespace std;
 // Input Data at runtime - integer and string
int main() 
{
   char name[50];
   int i; 
   cout << "Please enter your name:  "<<endl;   
   //cin >> name;   
   fflush(stdin);
   gets(name);  
   cout << "Please enter your code:  "<<endl;
   cin >> i;
   cout << "Your name is: " << name <<" and your code is "<<i<<endl;
    
   return 0;
 
}
