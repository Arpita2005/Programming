#include <stdio.h>
#include <stdlib.h>

struct node // Define a structure for a single node 
{
    int data;          // Data stored in the node
    struct node *next; // Pointer to the next node in the stack
};

struct stack // Define a structure to represent the stack 
{
    struct node *top; // Pointer to the top of the stack
};

void init_stack(struct stack *s) // Initialize the stack by setting top to NULL
{
    s->top = NULL; // att the first we know that if the  stack is empty, so top is NULL
}

int is_stack_empty(struct stack *s)
{
    return (s->top == NULL); // as i said in the previous line , if top is NULL, the stack is empty
}

void push(struct stack *s, int data)
{
    struct node *new_node = malloc(sizeof(struct node));   // pushing or adding new value ...so creating a a new node to hold the data
    new_node->data = data;   // Set the data of the new node
    new_node->next = s->top; // The new node's next points to the previous top
    s->top = new_node;       // Update top to the new node (new top)
}

// Pop (remove) an element from the top of the stack
int pop(struct stack *s)
{
    if (is_stack_empty(s))
    {
        return -1; // Return -1 to indicate an empty stack
    }
    else
    {
        struct node *temp = s->top; // Temporarily store the current top node
        int data = temp->data;      // Get the data from the top node
        s->top = temp->next;        // Update top to the next node
        free(temp);                 // Free the memory of the popped node
        return data;                // Return the popped data
    }
}

// Print the elements in the stack
void print_stack(struct stack *s)
{
    struct node *temp = s->top; // Start from the top of the stack
    while (temp != NULL)
    {
        printf("%d ", temp->data); // Print the data of the current node
        temp = temp->next;         // Move to the next node
    }
    printf("\n");
}

// Get user input for push operation
void get_user_input(struct stack *s)
{
    int data;
    printf("Enter the data to push: ");
    scanf("%d", &data);
    push(s, data);
}

int main()
{
    struct stack s; // Create a stack instance
    init_stack(&s); // Initialize the stack

    while (1)
    {
        printf("1. Push\n2. Pop\n3. Print stack\n4. Exit\n");
        int choice;
        scanf("%d", &choice); // Get the user's choice

        switch (choice)
        {
        case 1:
            get_user_input(&s); // Perform push operation with user input
            break;
        case 2:
            printf("Popped data: %d\n", pop(&s)); // Perform pop operation and print data
            break;
        case 3:
            print_stack(&s); // Print the elements in the stack
            break;
        case 4:
            return 0; // Exit the program
        default:
            printf("Invalid choice!\n"); // Handle invalid choices
        }
    }

    return 0;
}
