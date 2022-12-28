#include"stdio.h"
#include"conio.h"
int main()
{
    int last_num;
    printf("Enter the last range:\n");
    scanf("%d",&last_num);
    printf("The numbers are:\n");
    for(int i=0;i<=last_num;i++)
    {
        if(i%10!=0)
        {
            printf("%d\t",i);
        }
    }
    getch();
    return 0;
}