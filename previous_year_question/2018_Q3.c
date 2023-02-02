//WAP to check wheather a number is pallindrome or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,k,reverse=0,rem;
    printf("Enter the number:\n");
    scanf("%d",&num);
    k=num;
    while(k!=0)
    {
        rem=k%10;
        reverse=reverse*10+rem;
        k=k/10;
    }
    printf("The reverse of %d is:%d",num,reverse);
    if(num==reverse)
    {
        printf("\nThis is an example of pallindrome\n");
    }
    else
    {
        printf("This is not pallindrome\n");
    }
    getch();
    return 0;
    
}