#include <stdio.h>
#include <conio.h>
void display(int n);
int main()
{
    // Code
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    display(n);

    getch();
    return 0;
}
void display(int n)
{
    if (n < 1)
    {
        // printf("0");
        return;
    }
    else
    {
        printf("Before -1 = %d \n", n);
        display(n - 1);
        printf("After -1 = %d \n", n);
    }
}