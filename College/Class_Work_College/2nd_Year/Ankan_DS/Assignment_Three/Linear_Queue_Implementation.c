#include <stdio.h>
#include <stdlib.h>
struct node // Structure of node
{
    int data;
    struct node *next;
};
struct queue// Structure of queue containing those nodes (as linked lists are used here to make the code)
{
    struct node *front; // Pointer to the front
    struct node *rear;  // Pointer to the rear
};

void init_queue(struct queue *q)// Initializing the front and rear
{
    q->front = NULL;
    q->rear = NULL;
}

int is_queue_empty(struct queue *q)// Check if the queue is empty
{
    return (q->front == NULL);
}

void enqueue(struct queue *q, int data)// insert an element into the queue
{
    struct node *new_node = malloc(sizeof(struct node));    // as we are inserting new element so we need to create a new node to hold the data
    new_node->data = data;
    new_node->next = NULL;

    if (is_queue_empty(q))
    {
        q->front = new_node; // If the queue is empty, we set both front and rear to the new node that we will be adding
        q->rear = new_node;
    }
    else
    {
        q->rear->next = new_node; // If the queue is not empty, add the new node to the rear and update rear
        q->rear = new_node;
    }
}

int dequeue(struct queue *q) // remove an element from the front
{
    if (is_queue_empty(q))
    {
        return -1; // return -1 to indicate an empty queue (we know that -1 means queue is empty)
    }
    else // if not empty
    {
        struct node *temp = q->front;
        int data = temp->data; // Getting data from the front
        q->front = temp->next; // Update front to the next
        if (q->front == NULL)
        {
            q->rear = NULL; // if front becomes NULL, rear also becomes NULL (empty queue)
        }
        free(temp);  // Free the memory of the dequeued node
        return data; // Return the dequeued data
    }
}

void print_queue(struct queue *q)//printing quueue
{
    struct node *temp = q->front;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void get_user_input(struct queue *q) // Asking user to give input incase we are using the enqueue function
{
    int data;
    printf("Enter the value you want to add: ");
    scanf("%d", &data);
    enqueue(q, data);
}

int main()
{
    struct queue q;
    init_queue(&q);
    int choice;
    while (1)
    {
        printf("Linear Queue Implementation :- \n");
        printf("1. Enqueue\n2.Dequeue\n3. Traverse\n4. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            get_user_input(&q); // if enqueue , then we call the user input function , containing the enqueue function
            break;
        case 2:
            printf("Dequeued data: %d\n", dequeue(&q));
            break;
        case 3:
            print_queue(&q);
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
