#include<stdio.h>
#include<conio.h>
typedef struct node
{
    int data;
    struct node *next;
}n;

node* insertbegining(node*h);
node* insertend(node *h);
node* insertposition(node *h);
node* deletebegining(node *h);
node* deleteend(node *h);
node* deleteposition(node *h);
node* display(node*h);

int main()
{
    int num;
    n *head,*ptr,*ptr1;
    printf("Enter the number of nodes :\n");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {

    }
}