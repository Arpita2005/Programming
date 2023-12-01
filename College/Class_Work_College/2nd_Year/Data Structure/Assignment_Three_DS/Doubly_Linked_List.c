#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
} n;

n *createNode(int data)
{
    n *newNode = (n *)malloc(sizeof(n));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(n **head, int data)
{
    n *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    newNode->next = *head;
    (*head)->prev = newNode;
    *head = newNode;
}

void insertAtEnd(n **head, int data)
{
    n *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    n *current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
}

void insertAtPosition(n **head, int data, int position)
{
    if (position <= 0)
    {
        printf("Invalid position.\n");
        return;
    }
    if (position == 1)
    {
        insertAtBeginning(head, data);
        return;
    }

    n *newNode = createNode(data);
    n *current = *head;
    for (int i = 1; i < position - 1 && current != NULL; ++i)
    {
        current = current->next;
    }
    if (current == NULL)
    {
        printf("Position out of range.\n");
        free(newNode);
        return;
    }

    newNode->next = current->next;
    newNode->prev = current;
    if (current->next != NULL)
    {
        current->next->prev = newNode;
    }
    current->next = newNode;
}

void deleteAtBeginning(n **head)
{
    if (*head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    n *temp = *head;
    *head = (*head)->next;
    if (*head != NULL)
    {
        (*head)->prev = NULL;
    }
    free(temp);
}

void deleteAtEnd(n **head)
{
    if (*head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    n *current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    if (current->prev != NULL)
    {
        current->prev->next = NULL;
    }
    else
    {
        *head = NULL;
    }
    free(current);
}

void deleteAtPosition(n **head, int position)
{
    if (*head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    if (position <= 0)
    {
        printf("Invalid position.\n");
        return;
    }
    if (position == 1)
    {
        deleteAtBeginning(head);
        return;
    }

    n *current = *head;
    for (int i = 1; i < position && current != NULL; ++i)
    {
        current = current->next;
    }
    if (current == NULL)
    {
        printf("Position out of range.\n");
        return;
    }

    if (current->prev != NULL)
    {
        current->prev->next = current->next;
    }
    else
    {
        *head = current->next;
    }
    if (current->next != NULL)
    {
        current->next->prev = current->prev;
    }
    free(current);
}

n *search(n *head, int data)
{
    n *current = head;
    while (current != NULL)
    {
        if (current->data == data)
        {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void displayForward(n *head)
{
    n *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    n *head = NULL;

    int choice, data, position;
    while (1)
    {
        printf("\nDoubly Linked List Menu:\n1. Insert at beginning\n2. Insert at end\n3. Insert at position\n4. Delete element at the beginning\n5. Delete at the end\n6. Delete at any position\n7. Search\n8. Display\n9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            insertAtBeginning(&head, data);
            printf("Node inserted.\n");
            break;
        case 2:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            insertAtEnd(&head, data);
            printf("Node inserted.\n");
            break;
        case 3:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            printf("Enter position to insert: ");
            scanf("%d", &position);
            insertAtPosition(&head, data, position);
            break;
        case 4:
            deleteAtBeginning(&head);
            printf("Node deleted from the beginning.\n");
            break;
        case 5:
            deleteAtEnd(&head);
            printf("Node deleted from the end.\n");
            break;
        case 6:
            printf("Enter position to delete: ");
            scanf("%d", &position);
            deleteAtPosition(&head, position);
            break;
        case 7:
            printf("Enter value to search: ");
            scanf("%d", &data);
            if (search(head, data) != NULL)
            {
                printf("%d found in the list.\n", data);
            }
            else
            {
                printf("%d not found in the list.\n", data);
            }
            break;
        case 8:
            printf("Doubly linked list in forward direction: ");
            displayForward(head);
            break;
        case 9:
            printf("Ending...\n");
            exit(0);
        default:
            printf("Enter the correct option.\n");
        }
    }
    getch();
    return 0;
}
