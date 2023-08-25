#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

node *display(node *h)
{
    node *ptr;
    ptr = h;
    printf("\nthe elements of the linklist are ");
    printf("\nHeader---->");
    while (ptr != NULL)
    {
        printf("%d--->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
    return (h);
}
node *insertbegining(node *h)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    printf("enter the data ");
    scanf("%d", &ptr->data);
    ptr->next = h;
    h = ptr;
    return (h);
}
node *insertend(node *h)
{
    node *ptr, *ptr1;
    ptr = (node *)malloc(sizeof(node));
    printf("enter the data ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;
    ptr1 = h;
    while (ptr1->next != NULL)
    {
        ptr1 = ptr1->next;
    }
    ptr1->next = ptr;
    return (h);
}
node *insertposition(node *h)
{
    int i, pos;
    node *ptr, *ptr1;
    i = 1;
    ptr = h;
    printf("\nenter the position ");
    scanf("%d", &pos);
    while (i < pos)
    {
        ptr = ptr->next;
        i = i + 1;
    }

    ptr1 = (node *)malloc(sizeof(node));
    printf("enter the data ");
    scanf("%d", &ptr1->data);
    ptr1->next = ptr->next;
    ptr->next = ptr1;
    return (h);
}
node *deletebegining(node *h)
{
    node *ptr;
    if (h == NULL)
    {
        printf("delete not possible");
    }
    else
    {
        ptr = h;
        h = h->next;
        free(ptr); //to free or deallocate the dynamically allocated memory ....it can  help in reducing memory wastage.
        return (h);
    }
}
node *deleteend(node *h)
{
    node *ptr, *ptr1;
    if (h == NULL)
    {
        printf("delete not possible");
    }
    else
    {
        ptr = h;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
        return (h);
    }
}

node *deleteposition(node *h)
{
    int i, pos;
    node *ptr, *ptr1;
    ptr = h;
    printf("\nenter the position ");
    scanf("%d", &pos);
    for (i = 1; i < pos; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;
    }
    ptr1->next = ptr->next;
    free(ptr);
    return (h);
}
int main()
{
    int i, n, ch;
    node *head, *ptr, *ptr1;
    printf("enter the no of nodes of the link list ");
    scanf("%d", &n);
    head = (node *)malloc(sizeof(node));
    printf("\nenter values one by one ");
    scanf("%d", &head->data);
    head->next = NULL;
    ptr = head;
    for (i = 1; i < n; i++)
    {
        ptr1 = (node *)malloc(sizeof(node));
        scanf("%d", &ptr1->data);
        ptr->next = ptr1;
        ptr1->next = NULL;
        ptr = ptr1;
    }
    while (1)
    {
        printf("\n1. Insert begining \n2. Interest end \n3. Interest position \n4. Delelte begining \n5. Delete end \n6. delete position \n7. display \n8. Exit");
        printf("\n enter your choice :\n");
        scanf("%d", &ch);
        if (ch == 8)
            break;
        switch (ch)
        {
        case 1:
            head = insertbegining(head);
            break;
        case 2:
            head = insertend(head);
            break;
        case 3:
            head = insertposition(head);
            break;
        case 4:
            head = deletebegining(head);
            break;
        case 5:
            head = deleteend(head);
            break;
        case 6:
            head = deleteposition(head);
            break;
        case 7:
            head = display(head);
            break;
        case 8:
             exit(0);
             break;
        default:
            printf("wrong choice");
        }
    }
    getch();
    return 0;
}
