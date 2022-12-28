#include"stdio.h"
#include"conio.h"
int main()
{
    int num,k,x,remainder=0,count=0,result;
    printf("Enter the integer value:\n");
    scanf("%d",&num);
    k=x=num;
    printf("The numbers are:\n");
    while(k!=0)
    {
        remainder=k%10;
        k=k/10;
        //count++;
        printf("%d\n",remainder);
    }
    printf("All the numbers after squaring:\n");
    while(x!=0)
    {
        remainder=x%10;
        x=x/10;
        printf("%d\n",remainder*remainder);
    }
    getch();
    return 0;
}
