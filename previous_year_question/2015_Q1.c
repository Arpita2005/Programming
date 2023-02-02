//WA a recursive function called power () to calculate x rise to the power n 
#include<stdio.h>
#include<conio.h>
int power(int num,int base)
{
    if(num!=0)
    {
        return (base*power(base,num-1));
    }
    else
    {
        return 1;
    }
}
int main()
{
    int base,num,result;
    printf("Enter the base number:\n");
    scanf("%d",&base);
    printf("Enter the power:\n");
    scanf("%d",&num);
    result=power(base,num);
    printf("The result is:%d",result);
    getch();
    return 0;
}