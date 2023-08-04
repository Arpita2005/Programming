// All Functions using array in queue
#include<stdio.h>
#include<conio.h>
int insert()
{
    for(int i=0;i<=size-1;i++)
    {
        printf("Enter the value one by one:\n");
        scanf("%d",&nnum);
    if(rear>size-1)
    {
        printf("Overflow of Queue\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
            rear++;
            arr[rear]=nnum;
         }
    }
    }
    if(front==-1)
    {
        printf("Queue is empty \n");
    }
    else
    {
    printf("The elements of queue are :\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d\t",arr[i]);
    }
    }
}
int delete()
{
    if(front==-1&&front>rear)
    {
        printf("Queue underflow \n");
    }
    else
    {
        printf("Element deleted from queue is : %d",arr[front])
        front++;
    }
}

int main()
{
   
    int size,front=-1,rear=-1,nnum,choose;
    printf("Enter The size of array :\n");
    scanf("%d",&size);
    while(1)
    {
        printf("1.Insert element to queue n");
        printf("2.Delete element from queue n");
        printf("3.Display all elements of queue n");
        printf("4.Quit n");
        printf("Enter your choice : ");
        scanf("%d", &choose);
   switch(choose)
{
     case 1:
      insert();
     break;
     case 2:
      delete();
     break;
     case 3:
      display();
     break;
 case 4:
exit(1);
default:
printf("Wrong choice n");
}
}
    }

    int arr[size];
    getch();
    return 0;
}


#include <stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void delete();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int main()
{
int choice;
while (1)
{
printf("1.Insert element to queue n");
printf("2.Delete element from queue n");
printf("3.Display all elements of queue n");
printf("4.Quit n");
printf("Enter your choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
exit(1);
default:
printf("Wrong choice n");
}
}
}
void insert()
{
int item;
if(rear == MAX - 1)
printf("Queue Overflow n");
else
{
if(front== - 1)
front = 0;
printf("Inset the element in queue : ");
scanf("%d", &item);
rear = rear + 1;
queue_array[rear] = item;
}
}
void delete()
{
if(front == - 1 || front > rear)
{
printf("Queue Underflow n");
return;
}
else
{
printf("Element deleted from queue is : %dn", queue_array[front]);
front = front + 1;
}
}
void display()
{
int i;
if(front == - 1)
printf("Queue is empty n");
else
{
printf("Queue is : n");
for(i = front; i <= rear; i++)
printf("%d ", queue_array[i]);
printf("n");
}
}
