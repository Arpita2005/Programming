#include<stdio.h>
#include<conio.h>
int recursive(int last_num)
{
    printf("%d\n",last_num);
    if (last_num==1)
    {
        printf("Program ended");
    }
    else
    {
        recursive(last_num-1);
    }
}
int main()
{
    int last_num;
    printf("Enter a last number");
    scanf("%d",&last_num);
    recursive(last_num);
    getch();
}