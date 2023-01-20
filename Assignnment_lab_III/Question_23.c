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
    printf("The Binary Value is:\n");
    biNo = convertBinary(decNo); 
    // printf(" The Binary value of decimal no. %d is : %ld\n\n",decNo,biNo);
    getch();
    return 0;
}
long convertBinary(int decNo)
{
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