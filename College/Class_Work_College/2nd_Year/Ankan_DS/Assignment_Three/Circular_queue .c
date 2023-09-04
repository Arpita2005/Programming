#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Queue
{
    struct Node *front;
    struct Node *rear;
};

struct Queue *createQueue()
{
    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

void enqueue(struct Queue *queue, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (queue->rear == NULL)
    {
        queue->front = newNode;
        queue->rear = newNode;
        newNode->next = newNode; // Circular connection
    }
    else
    {
        newNode->next = queue->front;
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

int dequeue(struct Queue *queue)
{
    if (queue->front == NULL)
    {
        printf("Queue is empty.\n");
        return -1; // Return a sentinel value indicating error or empty queue
    }

    int data = queue->front->data;

    if (queue->front == queue->rear)
    {
        free(queue->front);
        queue->front = NULL;
        queue->rear = NULL;
    }
    else
    {
        struct Node *temp = queue->front;
        queue->front = queue->front->next;
        queue->rear->next = queue->front;
        free(temp);
    }

    return data;
}
void display(struct Queue *queue)
{
    struct Node *current = queue->front;

    if (current == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    do
    {
        printf("%d ", current->data);
        current = current->next;
    } while (current != queue->front);
    printf("\n");

    printf("Front element: %d\n", queue->front->data); // Print the front element
    printf("Rear element: %d\n", queue->rear->data);   // Print the rear element
}


/*void display(struct Queue *queue)
{
    struct Node *current = queue->front;

    if (current == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    do
    {
        printf("%d ", current->data);
        current = current->next;
    } while (current != queue->front);
    printf("\n");
}*/

int main()
{
    struct Queue *queue = createQueue();
    int choice, data;

    do
    {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to enqueue: ");
            scanf("%d", &data);
            enqueue(queue, data);
            break;
        case 2:
            printf("Dequeued: %d\n", dequeue(queue));
            break;
        case 3:
            display(queue);
            break;
        case 0:
            printf("exiting your honor.....Goodbye..\n");
            break;
        default:
            printf("Wrong input...please choose an option from the given list\n");
        }
    } while (choice != 0);

    return 0;
}
