// 1. Write a program in C to implement Stack data structure  using array with the following operations -

// •	push() to insert an element into the stack
// •	pop() to remove an element from the stack
// •	top() Returns the top element of the stack.
// •	isEmpty() returns true is stack is empty else false
// •	size() returns the size of stack

#include<stdio.h>
#include<conio.h>
int stack[100],choice,n,top,x,i;

void push(void);
void pop(void);
void isempty(void);
void isfull(void);
void display(void);


int main()
{
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
  
  while(1)
    {
          printf("\n\t STACK OPERATIONS USING ARRAY");
          printf("\n\t--------------------------------");
          printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.isEmpty\n5.isFull\n6.EXIT");
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
       if(choice==1)
            {
                push();
            }
           else if(choice==2)
            {
                pop();
            }
           else if(choice==3)
            {
                display();
            }
         else if(choice==4)
            {
                printf("\n\t EXIT POINT ");
                exit(0);
            }
        else
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
    }
    getch();
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void isempty(void)
{
    if(top<=-1)
    {
        printf("\nStack is Empty");
    }
    else
    {
        printf("There is element in stack\n");
    }
}
void isfull(void)
{
    if(top>=n-1)
    {
        printf("Stack is Full \n");
    }
    else
    {
        printf("We have space to insert element in stack \n");
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
        printf("\n%d",stack[i]);

      //  printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}
