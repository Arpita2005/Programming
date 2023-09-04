#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;          // Data stored in the node
    struct node *prev; // Pointer to the previous node
    struct node *next; // Pointer to the next node
};

struct doubly_linked_list
{
    struct node *head; // Pointer to head
    struct node *tail; // Pointer to tail
};

void init_doubly_linked_list(struct doubly_linked_list *list)
{
    list->head = NULL; // at first everything is at null or -1
    list->tail = NULL;
}

int is_doubly_linked_list_empty(struct doubly_linked_list *list)
{
    return (list->head == NULL); // If head is NULL, the list is empty
}

void insert_at_beginning(struct doubly_linked_list *list, int data)
{
    struct node *new_node = malloc(sizeof(struct node)); // Create a new node and set its properties
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = list->head;

    if (list->head != NULL) // Update the previous link of the current head if it exists
    {
        list->head->prev = new_node;
    }

    list->head = new_node; // Update the head of the list to the new node

    if (list->tail == NULL) // If the list was empty, update the tail as well
    {
        list->tail = new_node;
    }
}

void insert_at_end(struct doubly_linked_list *list, int data)
{

    struct node *new_node = malloc(sizeof(struct node)); // Create a new node and set its properties
    new_node->data = data;
    new_node->prev = list->tail;
    new_node->next = NULL;

    if (list->tail != NULL) // Update the next link of the current tail if it exists
    {
        list->tail->next = new_node;
    }
    list->tail = new_node; // Update the tail of the list to the new node
    if (list->head == NULL) // If the list was empty, update the head as well
    {
        list->head = new_node;
    }
}

void insert_at_position(struct doubly_linked_list *list, int data, int position)
{
    if (position <= 1) // Handling insertion at the beginning separately
    {
        insert_at_beginning(list, data);
        return;
    }

    struct node *current_node = list->head; // Traverse the list to find the node before the desired position
    int i = 1;
    while (current_node != NULL && i < position - 1)
    {
        current_node = current_node->next;
        i++;
    }

    if (current_node == NULL) // Check if the position is out of bounds
    {
        printf("The specified position is out of bounds!\n");
        return;
    }

    struct node *new_node = malloc(sizeof(struct node)); // Create a new node and set its properties
    new_node->data = data;
    new_node->prev = current_node;
    new_node->next = current_node->next;

    if (current_node->next != NULL) // Update links of the surrounding nodes to insert the new node
    {
        current_node->next->prev = new_node;
    }
    current_node->next = new_node;

    if (new_node->next == NULL) // Update the tail if the new node is at the end
    {
        list->tail = new_node;
    }
}

void delete_element(struct doubly_linked_list *list, int data)
{
    struct node *current_node = list->head;
    while (current_node != NULL)
    {
        if (current_node->data == data)
        {
            if (current_node == list->head)
            {
                list->head = current_node->next; // If the element to be deleted is at the head, Update the head to the next node
            }
            else
            {
                current_node->prev->next = current_node->next; // If the element to be deleted is not at the head,Update previous node's next pointer
            }

            if (current_node == list->tail)
            {
                list->tail = current_node->prev; // If the element to be deleted is at the tail,Update the tail to the previous node
            }
            else
            {

                current_node->next->prev = current_node->prev; // If the element to be deleted is not at the tail,Update next node's previous pointer
            }

            free(current_node); // Free the memory of the node to delete
            return;
        }

        current_node = current_node->next;
    }

    printf("The element is not found!\n");
}

int search_element(struct doubly_linked_list *list, int data)
{
    struct node *current_node = list->head; // Start from the head
    int position = 1;
    while (current_node != NULL)
    {
        if (current_node->data == data)
        {
            return position;
        }
        current_node = current_node->next;
        position++;
    }
    return -1; // Element not found in the list, return -1
}

void traverse(struct doubly_linked_list *list)
{
    struct node *current_node = list->head; // Start from the head of the list
    printf("Doubly Linked List: ");
    while (current_node != NULL)
    {
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
    printf("\n"); // Print a newline after displaying all elements
}

int main()
{
    struct doubly_linked_list list;
    init_doubly_linked_list(&list);

    int choice, data, position;

    while (1)
    {
        printf("\nDoubly Linked List Menu:\n1. Insert at beginning\n2. Insert at end\n3. Insert at position\n4. Delete element\n5. Search element\n6. Traverse list\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            insert_at_beginning(&list, data);
            break;
        case 2:
            printf("Enter data: ");
            scanf("%d", &data);
            insert_at_end(&list, data);
            break;
        case 3:
            printf("Enter data: ");
            scanf("%d", &data);
            printf("Enter position: ");
            scanf("%d", &position);
            insert_at_position(&list, data, position);
            break;
        case 4:
            printf("Enter element to delete: ");
            scanf("%d", &data);
            delete_element(&list, data);
            break;
        case 5:
            printf("Enter element to search: ");
            scanf("%d", &data);
            position = search_element(&list, data);
            if (position != -1)
            {
                printf("Element found at position %d\n", position);
            }
            else
            {
                printf("Element not found in the list\n");
            }
            break;
        case 6:
            traverse(&list);
            break;
        case 7:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice. Please choose a valid option.\n");
        }
    }

    return 0;
}