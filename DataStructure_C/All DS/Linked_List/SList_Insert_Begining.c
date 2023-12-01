#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
}n;
int main()
{
     int num;
    n *head,*ptr,*ptr1,*nnum;
    printf("Enter the numer of nodes :\n");
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
    nnum=(n*)malloc(sizeof(n));
    printf("Enter the new data :\n");
    scanf("%d",&nnum->data);
    nnum->link=head;
    head=nnum;
    printf("\nThe elements are :\n");
    if(head==NULL)
    {
        printf("List is empty \n");
    }
    else
    {
        ptr=nnum;
        while (ptr!=NULL)
        {
           printf("%d\n",ptr->data);
           ptr=ptr->link;
        }
        
    }
    getch();

}