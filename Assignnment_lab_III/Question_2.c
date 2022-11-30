#include<stdio.h>
#include<conio.h>
void square_function();
int main()
{
    square_function();
    getch();
    return 0;
}
void square_function()
{
    int i,result;
    printf("Enter the number:  \n");
    scanf("%d",&i);

    result=i*i;
    printf("The result is:%d",result);
}