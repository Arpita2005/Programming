#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
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
        printf("%d is an armstrong number", number);
    else
        printf("%d is not an armstrong number", number); 
        getch();
    return 0;
}