#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int stack[100],top,n;
void push(void)
{
    int data;
    if (top>=n-1)
    {
        printf(" \nStack is full ");
    }
    else
    {
        printf("Enter the data :\n");
        scanf("%d", &data);
        top++;
        stack[top] = data;
    }
}
void pop(void)
{
    if (top>=n-1)
    {
        printf("Stack is full ");
    }
    else
    {
        printf("The removed element is : %d", stack[top]);
        top--;
    }
}
void topelement(void)
{
    printf("The Top lement is :%d", stack[top]);
}
void isempty(void)
{
    if (top >=-1)
    {
        printf("Stack is not empty \n");
    }
    else
    {
        printf("Stack is empty \n");
    }
}
void size(void)
{
    printf("The size of stack is :\n%d",top + 1);
}

void isfull(void)
{
    if (top > n)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Stack is not full \n");
    }
}
void display(void)
{
    if (top >= 0)
    {
        for (int i = top; i > 0; i--)
        {
            printf("%d\n", &stack[i]);
        }
    }
    else
    {
        printf("There is no element \n");
    }
}
int main()
{
    int top=-1, choose;
    printf("Enter the size of the stack [between 100]:\n");
    scanf("%d", &n);
    while (1)
    {
        printf("\nWhat do you want to do ??\n1. Push\n2. Pop\n3. Size\n4. isempty\n5. isfull\n6. top\n7. Display\n8. Exit\n");
        printf("........\n");
        scanf("%d", &choose);
        printf("\n........\n");
        if (choose == 1)
        {
            push();
        }
        else if (choose == 2)
        {
            pop();
        }
        else if (choose == 3)
        {
            size();
        }
        else if (choose == 4)
        {
            isempty();
        }
        else if (choose == 5)
        {
            isfull();
        }
        else if (choose == 6)
        {
            topelement();
        }
        else if (choose == 7)
        {
            display();
        }
        else if (choose == 8)
        {
            exit(0);
        }
        else
        {
            printf("Choose the correct option \n");
        }
    }
    getch();
    return 0;
}