// Armstrong Number 
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int num=0,size=0,rem=0,sum=0,k=0;
    printf("Enter the Number :\n");
    scanf("%d",&num);
    size=log10(num)+1;
    k=num;
    while(k!=0)
    {
        rem=k%10;
        sum=sum+(int)(pow(rem,size));
        k/=10;
    }

    if(sum==num)
    {
        printf("%d is an armstrong number \n",num);
    }
    else
    {
        printf("%d is not an armstrong number \n",num);
    }

    getch();
    return 0;
}