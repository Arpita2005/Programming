/***Write a program in C to convert a decimal number to binary using recursion.***/
#include<stdio.h>
#include<conio.h>
long convertBinary(int);
int main()
{
    long biNo;
    int decNo;
    printf(" Input any decimal number : ");
    scanf("%d",&decNo);
    printf(" The Binary value of decimal no. %d is : %ld\n\n",decNo,biNo);
    biNo = convertBinary(decNo);         /**call the function convertBinary**/
    getch();
    return 0;
}
long convertBinary(int decNo)
{
    // static long biNo,r,fctor = 1;

    // if(decNo != 0)
    // {
    //      r = decNo % 2;
    //      biNo = biNo + r * fctor;
    //      fctor = fctor * 10;
    //      convertBinary(decNo / 2);     /**calling the function convertBinary itself recursively**/
    // }
    // return biNo;
    if(decNo==0)
    {
        return 0;
    }
    else
    {
        convertBinary(decNo/2);
        printf("%d",decNo%2);
    }
}