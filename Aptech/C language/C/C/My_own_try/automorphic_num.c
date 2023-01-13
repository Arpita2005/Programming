#include"stdio.h"
#include"conio.h"
int main()
{

    int num,k,rem=1,count=0,result;
    printf("Enter a number:\n");
    scanf("%d",&num);
    result=num*num;
    printf("The Square is:%d\n",result);
    k=num;
    while(num!=0)
    {
        rem=rem*10;
        num=num/10;
    }
     if(result%rem==k)
     
        {
            printf("It is a automorphic number\n");
        }
        else
        {
            printf("It is not a automorphic number\n");
        }
    getch();
    return 0;
}