#include<stdio.h>
#include<conio.h>
#include<math.h>
void armstrong_number();
void perfect_number();
int main()
{
    armstrong_number();
    perfect_number();
    getch();
    return 0;
}
void armstrong_number()
{
int number = 0, length = 0, copy = 0, reminder = 0, sum = 0;
    printf("Enter the number:\n");
    scanf("%d", &number);
    printf("You enetered: %d\n", number);
    copy = number;
    while(copy != 0)
    {
        length += 1;
        copy /= 10;
    }
    copy = number;
    while(copy != 0)
    {
        reminder = copy % 10;
        sum += (int)(pow(reminder, length));
        copy /= 10;
    }   
    if(sum == number)
        printf("%d is an armstrong number\n", number);
    else
        printf("%d is not an armstrong number\n", number); 
}
void perfect_number()
{

    int number,i,total=0,rem,copy1;
    printf("Enter your number to show is it perfect or not\n");
    printf("====================\n");
    // printf("Enter your number:\n");
    scanf("%d",&number);
    copy1=number;
    for(i=1;i<number;i++)
    {
        rem=copy1%i;
        if(rem==0)
        {
            total=total+i;
        }
    }
if(total==number)
{
    printf("%d is a perfect number\n",number);
}
else
{
    printf("%d is not a perfect number\n",number);
}
}