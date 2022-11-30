#include<stdio.h>
#include<conio.h>
int main()
{
    int number,reverse=0,rem,k;
    printf("Enter the number:\n");
    scanf("%d",&number);
   k= number;
    while(k!=0)
    {
        rem=k%10;
        reverse=reverse*10+rem;
        k=k/10;
    }
    printf("The reverse no of %d is %d",number,reverse);

    getch();
    return 0;

}