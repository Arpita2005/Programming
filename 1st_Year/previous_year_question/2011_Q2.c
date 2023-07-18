//1+(1+2)+(1+2+3)+.......
#include<stdio.h>
#include<conio.h>
int pattern(int num)
{
    int i,s=0;
    for(i=0;i<num;i++)
    {
        s=s+i;
    }
    return s;
}
int main()
{
    int num,i,s=0;
    printf("Enter the last range:\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        s=s+pattern(i);
    }
    printf("\nSum is: %d",s);
    getch();
    return 0;
}