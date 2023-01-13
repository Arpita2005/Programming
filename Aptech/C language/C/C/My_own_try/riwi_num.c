#include<stdio.h>
#include<conio.h>
int main()
{
    int num,ll,l,m;;
    printf("Enter the number:\n");
    scanf("%d",&num);
    ll=num%100;
    l=ll/10;
    m=num%10;
    if(m==l)
    {
        printf("It is a Riwi Number\n");
    }
    else 
    {
        printf("It is not a Riwi NUumber\n");
    }
    getch();
    return 0;
}
// ll= 34%100 = 34          number=34

// l=(ll)34/10 = 0

// f=34%10 = 4