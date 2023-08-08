//Fibonacci Series Print
#include<stdio.h>
#include<conio.h>
void fibonacci();
int main()
{
    fibonacci();
    getch();
    return 0;
}
void fibonacci()
{
    int num,n0=0,n1=1,result;
    printf("Enter the last range to print fibonacci series:\n");
    scanf("%d",&num);
    printf("The Fibonacci series is:  %d\t%d\t",n0,n1);
    for(int i=0;i<num-2;i++)
    {
        if(num>0)
        {
            result=n0+n1;
            n0=n1;
            n1=result;
            printf("%d\t",result);
        }
    }
}