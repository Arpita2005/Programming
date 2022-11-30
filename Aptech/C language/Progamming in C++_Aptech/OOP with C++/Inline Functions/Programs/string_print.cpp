#include<iostream>
#include<conio.h>
using namespace std;

inline void print(string s)
{ 
    cout<<s;
}
int main()
{
     print("This is inline function"); 
	 //Call it like a normal function...
     getch();
     return 0;
}
