#include<iostream>
using namespace std;

class Object
{
	public:
		static int i;
		Object()
		{
			i++;
		}
		static void show()
		{
			cout<<"No of objects:=    "<<i;
		}
};
int Object::i=0;
int main()
{
	Object o1;
	Object o2;
	Object o3;
	Object o4;
	Object o5;
	
	Object::show();
	
	return 0;
}
