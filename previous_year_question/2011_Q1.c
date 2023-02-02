//Input a M digit number.Print every digit but lsb first
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,k,rem,last=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    k=num;
    while(k!=0)
    {
        rem=k%10;
        last=last*10+rem;
        k=k/10;
    }
    printf("Every digits with LSB at first :\n%d",last);
    getch();
    return 0;
}