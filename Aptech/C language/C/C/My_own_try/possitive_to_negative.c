#include<stdio.h>
#include<conio.h>
void possitive_to_negative();
int main()
{
    possitive_to_negative();
    getch();
    return 0;
}
void possitive_to_negative()
{
    int num,t,i,new_num,decide;
//     printf("Which mode do you want to do ?\n1.Positive to Negative\n2.Negative to possitive\n");
//     scanf("%d",&decide);
//     if(decide==1)
// {
    printf("Enter the number:\n");
    scanf("%d",&num);
    t=num;
    if(num>=0)
    {
        printf("You have entered positive number:\n");
        printf("So the result is:\n");
        while(t!=0)
    {
        t=num-num;
        t=new_num;
        i=new_num-num;
        printf("The number is:%d",i);
    }
    }
    else
    {
        printf("You have entered negative number:\n");
        printf("So the result is:\n");
        while(t!=0)
    {
        t=num+num;
        t=new_num;
        i=new_num-num;
        printf("The number is:%d",i);
    }
    }
} 

