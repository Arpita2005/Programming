// Reverse Of a number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,k=0,rem=0,rev=0;
    printf("Enter The Number :\n");
    scanf("%d",&num);
    k=num;
    while(k!=0)
    {
        rem=k%10;
        rev=rev*10+rem;
        k=k/10;
    }
    printf("The reverse is : %d",rev);
    getch();
    return 0;
}