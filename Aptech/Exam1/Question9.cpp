#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int i,size,array[100];
    cout<<"Enter the size of array:\n";
    cin>>size;
    cout<<"Your number of elements are:"<<size<<endl;
    for(i=0;i<size;i++)
    {
        cout<<"Your element number:"<<i<<endl;
        cin>>array[i];
    }
    //sorting the largest element in an array
    for(i=0;i<=size;i++)
    {
        if(array[0]<array[i])
        {
            (array[0]=array[i]);
        }
    }
    cout<<"The largest element in this array is:"<<array[0]<<endl;

    getch();
    return 0;
}
