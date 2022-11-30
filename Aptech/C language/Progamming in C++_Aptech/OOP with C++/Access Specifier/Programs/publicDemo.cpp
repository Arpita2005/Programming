#include<iostream>
#include<conio.h>
using namespace std;

class S 
{
 public: // n, f, E, A, B, C, U are public members
    int n;
    static void f() {cout<<"   I  am static method ";}
    enum E {A, B, C};
    struct U {};
};
int main()
{
    S::f(); // S::f is accessible in main
    S s;
    s.n = S::B; // S::n and S::B are accesisble in main
    cout<<endl;
    cout<<s.n;
    S::U x; // S::U is accessible in main :: scope resolution operator
    getch();
}
