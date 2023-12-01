#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size = 50;
int queue[size];
int front=-1,rear=-1;
void enqueue(void)
{
    if(rear==size-1)
    {
        printf("Queue is full \n");    
    }
    else
    {
        int value;
        printf("Enter The Data :\n");
        scanf("%d",&value);
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=value;
        printf("The inserted value is :%d",value);
    }
}
void dequeue(void)
{

}
void display(void)
{
    
}
int main()
{

}