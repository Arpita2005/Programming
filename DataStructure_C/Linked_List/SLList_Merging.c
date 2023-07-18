// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>
// typedef struct Node
// {
//     int data;
//     struct Node *next;
// }n;
// n *temp = NULL,*first = NULL,*Second  =NULL,*third =NULL,*last =NULL;
// n *Create (int A[], int n)
// {
//     int i;
//     struct Node *t, *last;
//     temp = (struct Node *) malloc(sizeof(struct Node));
//     temp->data = A[0];
//     temp->next = NULL;
//     last = temp;

//     for (i = 1; i < n; i++)
//     {
//         t = (struct Node *) malloc(sizeof(struct Node));
//         t->data = A[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
//     return temp;
// }

// void Display(n *p)
// {
//     while (p != NULL)
//     {
//         printf ("%d ", p->data);
//         p = p->next;
//     }
// }

// void Merge(n *first,n *second)
// {
//     if (first->data < second->data)
//     {
//         third = last = first;
//         first = first->next;
//         last->next = NULL;
//     }
//     else
//     {
//         third = last = second;
//         second = second->next;
//         last->next = NULL;
//     }
    
//     while (first != NULL && second != NULL)
//     {
//         if (first->data < second->data)
//         {
//             last->next = first;
//             last = first;
//             first = first->next;
//             last->next = NULL;
//         }
//         else
//         {
//             last->next = second;
//             last = second;
//             second = second->next;
//             last->next = NULL;
//         }
//     }
    
//     if (first != NULL)
//         last->next = first;
//     else
//         last->next = second;
// }

// int main()
// {
//     n *temp = NULL,*first = NULL,*second  =NULL,*third =NULL,*last =NULL;
//     int size,size1,A[size],B[size1];
//    printf("Enter The size :\n");
//    scanf("%d",&size);
//    printf("Elements Of First Array  :\n");
//    for(int i=0;i<size;i++)
//    {
//      scanf("%d",&A[i]);
//    }

//    printf("Enter the size :\n");
//    scanf("%d",&size1);
//    printf("Elements Of Second Array  :\n");
//    for(int i=0;i<size1;i++)
//    {
//      scanf("%d",&B[i]);
//    }

//     first = Create (A, size);
//     second = Create (B, size1);

//     printf ("1st Linked List: ");
//     Display (first);

//     printf ("\n2nd Linked List: ");
//     Display (second);

//     Merge (first, second);

//     printf ("\n\nMerged Linked List: \n");
//     Display (third);
//     getch();
//   return 0;
// }

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct SLList_Merging
{
    int data;
    struct SLList_Merging *Link;
}n;

int main()
{
    n *head,*ptr,*ptr1,*head2,*mergehead;
    int j,num;
    printf("How much linked list do you want :\n");
    scanf("%d",&j);
    for(int k=0;k<j;k++)
    {
    printf("\nEnter the num of nodes Of %d Linked List :\n",k+1);
    scanf("%d",&num);
    head=(n*)malloc(sizeof(n));
    printf("Enter the values one by one :\n");
    scanf("%d",&head->data);
    head->Link=NULL;
    ptr=head;
    for(int i=1;i<num;i++)
    {
        ptr1=(n*)malloc(sizeof(n));
        scanf("%d",&ptr1->data);
        ptr->Link=ptr1;
        ptr1->Link=NULL;
        ptr=ptr1;
    }
    ptr=head;
    printf("\nThe %d Linked List is :\n",k+1);
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->Link;
    }
    }

    printf("The merged Linked List is :\n");
    for(int k=0;k<j;k++)
    {
        
    }
    getch();
    return 0;

}