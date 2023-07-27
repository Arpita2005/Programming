#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
}n;
n* insertbeg(n* head)
{
    n* ptr;
    ptr=(n *)malloc(sizeof(n));
    printf("Enter The Data :\n");
    scanf("%d",&ptr->data);
    ptr->link=head;
    head=ptr;
    return head;
}
n* insertend(n* head)
{
    n *ptr, *ptr1;
    ptr=(n *)malloc(sizeof(n));
    printf("Enter The Data :\n");
    scanf("%d",&ptr->data);
    ptr->link=NULL;
    ptr1=head;
    while(ptr1->link!=NULL)
    {
        ptr1=ptr1->link;
    }
   ptr1->link=ptr;
   return head;
}
n* insertany(n *head)
{
    n *ptr, *ptr1;
    int pos,i=1;
    ptr=(n *)malloc(sizeof(n));
    printf("Enter the position :\n");
    scanf("%d",&pos);
    while(i<pos)
    {
        ptr=ptr->link;
        i++;
    }
    printf("Enter The Data :\n");
    scanf("%d",&ptr->data);
    ptr->link=NULL;
    ptr1=head;
    while(ptr1->link!=NULL)
    {
        ptr1=ptr1->link;
    }
   ptr1->link=ptr;  
}
n* deletebeg(n *head)
{
    n *ptr;
    if(ptr==NULL)
    {
        printf("Delete not possible\n")
    }
    else
    {
        ptr=head;
        head=head->link;
        free(ptr);
        return (head);
    }
}
n* deleteeend(n *head)
{
    n *ptr;
    ptr=head;
    while(ptr->link==NULL)
    {
        
    }
}
int main()
{
    int num,choose;
    n *head, *ptr, *ptr1;
    printf("Enter the number of nodes :\n");
    scanf("%d",&num);
    head=(n *)malloc(sizeof(n));
    printf("Enter the datas one by one :\n");
    head->link=NULL;
    ptr=head;
    for(int i=0;i<num;i++)
    {
        ptr1=(n *)malloc(sizeof(n));
        scanf("%d",&ptr1->data);
        ptr->link=ptr1;
        ptr1->link=NULL;
        ptr=ptr1;
    }
    while(1)
    {
        printf("\n1. Insert begining \n");
		printf("2. Interest end \n");
		printf("3. Interest position \n");
		printf("4. Delelte begining \n");
		printf("5. Delete end \n");
		printf("6. delete position \n");
		printf("7. display \n");
		printf("8. Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&choose);
        switch(choose)
        {
            case 1 : insertbeg(head);
            break;
            case 2 : insertend(head);
            break;
             case 3 : insertany(head);
            break;
             case 4 : deletebeg(head);
            break;
            default: printf("Wrong Option \n");

        }
    }
    getch();
    return 0;
}