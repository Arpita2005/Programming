// Peterson number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,k=0,fact=1,rem=0,sum=0;
    printf("Enter the number :\n");
    scanf("%d",&num);
    k=num;
    while(k!=0)
    {
        rem=k%10;
        for(int i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum+=fact;
        fact=1;
        k=k/10;
    }
    if(num==sum)
    {
        printf("%d is a peterson number \n",num);
    }
    else
    {
        printf("%d is not a peterson number \n",num);
    }

    getch();
    return 0;
}