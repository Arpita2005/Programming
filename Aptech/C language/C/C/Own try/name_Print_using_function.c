#include <stdio.h>
#include <conio.h>

void calling_name();
int main()
{
    // Code
    printf("Print name using function : \n");

    calling_name();
    printf(" \n Press Enter to exit !");

    getch();
    return 0;
}
void calling_name()
{
    char name[50];
    int time = 1;
    printf("Enter your name : ");
    gets(name);
    printf("How much time do you want to print your name? ");
    scanf("%d", &time);

    for (int i = 1; i <= time; i++)
    {
        /* code */
        printf(" \n %d/- Your name is : %s", i, name);
    }
}