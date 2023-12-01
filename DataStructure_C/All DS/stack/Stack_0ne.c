#include<stdio.h>
#define max 10 
void push (int s[],int*top);
void pop (int s[],int*top);
void display (int s[], int*top);
void main ()
{
    int stack[10],top=-1,x;
    while(1)
    {
        printf("Select any one list :\n");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter Your Choice :\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1: push(stack,&top);
            break;
            case 2: pop(stack,&top);
            break;
            case 3: display(stack,&top);
            break;
            default: printf("\n Wrong Input \n");
        }
    }
}
void push(int s[],int *top)
{
    int x;
    if(*top <max-1)
    {
        printf("Enter the element :\n");
        scanf("%d",&x);
        *top=*top+1;
        s[*top]=x;
    }
    else

    {
        printf("Stack Overflow \n");
    }
}
void pop(int s[],int *top)
{
    if(*top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("The deleted element is :%d\n");
        *top=*top-1;
    }
}
void display(int s[],int *top)
{
    int i;
    printf("Enter the elements of the stack :\n");
    for(int i=*top;i>=0;i--)
    {
        printf("%d",s[i]);
    }
}