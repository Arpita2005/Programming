#include<stdio.h>
#include<conio.h>
void add_function();
int main()
{
        add_function();
        getch();
        return 0;
}
void add_function()
{
    int number_1,number_2,add;
    printf("Enter the first number:\n");
    scanf("%d",&number_1);
    printf("Enter the second number:\n");
    scanf("%d",&number_2);

    add=(number_1+number_2);
    printf("The result is:\n%d",add);

}