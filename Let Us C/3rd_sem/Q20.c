// Pallindrome Number 
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,k=0,rem=0,rev=0;
    printf("Enter the number :\n");
    scanf("%d",&num);
    k=num;
    while(k!=0)
    {
        rem=k%10;
        rev=rev*10+rem;
        k=k/10;
    }
    if(num==rev)
    {
        printf("%d is a pallindrome number \n",num);
    }
    else
    {
        printf("%d is not a pallindrome number \n",num);
    }

    getch();
    return 0;
}