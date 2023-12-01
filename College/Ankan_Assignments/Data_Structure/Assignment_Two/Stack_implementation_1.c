#include<stdio.h>
#include<conio.h>
int stack[50],choice,n,top,x,i;
void push()
{
    if(top>=n-1)
    {
        printf("\n\tStack overflow , Unable to Push any more");
    }
    else
    {
        printf(" Enter the value you want to push");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is underflow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n\t Stack Elements :- \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
    }
    else
    {
        printf("\n The stack is empty");
    }
}
int main()
{
    top=-1;
    printf("\n Enter stack size [Don't exceed the max size : 50]:");
    scanf("%d",&n);
    printf("\n\1.PUSH \n 2.POP\n 3.DISPLAY\n 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                exit(0);
                break;
            }
            default:
            {
                printf ("\n Invalid Choice");
            }
        }
    }
    while(choice!=4);
    return 0;
}
