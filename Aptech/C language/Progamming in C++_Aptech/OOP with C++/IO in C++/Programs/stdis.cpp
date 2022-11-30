#include <iostream> 
#include<conio.h>
using namespace std;
 // Input Data at runtime - integer and string
int main() 
{
   char name[50];
   int i; 
   cout << "Please enter your name:  "<<endl;   
   // cin >> name;   
   fflush(stdin);
   gets(name);  
   cout << "Please enter your age:  "<<endl;
   fflush(stdin);
   cin >> i;
   cout << "Your name is: " << name <<" and your age is "<<i<<endl;
    getch();
   return 0;
 
}
