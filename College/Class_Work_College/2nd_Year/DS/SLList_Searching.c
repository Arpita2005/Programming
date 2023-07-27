#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct SLList_Searching
{
   int data;
   struct SLList_Searching  *link;

}s;
int main()
{
    int num;
    s *head,*ptr,*ptr1,*se;
    printf("Enter The Number of nodes :\n");
    scanf("%d",&num);
    head=(s*)malloc(sizeof(s));
    printf("Enter The data one by one :\n");
    scanf("%d",&head->data);
    head->link=NULL;
    ptr=head;
    for(int i=1;i<num;i++)
    {
        ptr1=(s*)malloc(sizeof(s));
        scanf("%d",&ptr1->data);
        ptr->link=ptr1;                                                                       
        ptr1->link=NULL;
        ptr=ptr1;
    }
    printf("Enter the search element :\n");
    scanf("%d",&se->data);
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data==se)
        {
            return ptr;
            printf("Element is found \n");
        }
        ptr=ptr->link;
    }
    getch();
    return 0;

}
int 