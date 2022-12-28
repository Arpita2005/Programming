#include"stdio.h"
#include"conio.h"
int main()
{
    int num,k,remainder=0,count=0,result;
    printf("Enter the integer value:\n");
    scanf("%d",&num);
    k=num;
    printf("The numbers are:\n");
    while(k!=0)
    {
        remainder=k%10;
        k=k/10;
        //count++;
        printf("%d\n",remainder);
    }
    getch();
    return 0;
}