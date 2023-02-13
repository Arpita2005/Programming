#include<stdio.h>
#include<conio.h>
int rec_increase(int last,int i)
{
    // int i=1; printf("%d",i);
    printf("%d\n",i);
    if(i>last)
    {
        return 0;
    }
    else if(i<last)
    {
        rec_increase(last,i+1);
    }
}
int main()
{
    int i,last;
    printf("Enter a first number : ");
    scanf("%d",&i);
    printf("Enter a last number : ");
    scanf("%d",&last);
    rec_increase(last,i);
    getch();
}