#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node
{
    int data;
    struct node *link;
}n;

int main()
{
    int num;
    n *head,*ptr,*ptr1;
    printf("Enter the number of nodes :\n");
    scanf("%d",&num);
    head=(n*)malloc(sizeof(n));
    printf("Enter the values one by one :\n");
    scanf("%d",&head->data);
    head->link=NULL;
    ptr=head;
    for(int i=1;i<num;i++)
    {
        ptr1=(n*)malloc(sizeof(n));
        scanf("%d",&ptr1->data);
        ptr->link=ptr1;
        ptr1->link=NULL;
        ptr=ptr1;
    }
    printf("\nThe elements are :\n");
    if(ptr==NULL)
    {
        printf("List is empty \n");
    }
    else
    {
        ptr=head;
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->link;
        }
    }
    getch();
}