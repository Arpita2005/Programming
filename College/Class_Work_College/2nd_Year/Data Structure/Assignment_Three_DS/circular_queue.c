#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node
{
    int data;
    struct Node *next;
};

struct CircularQueue
{
    struct Node *rear;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct CircularQueue *createCircularQueue()
{
    struct CircularQueue *queue = (struct CircularQueue *)malloc(sizeof(struct CircularQueue));
    queue->rear = NULL;
    return queue;
}

int isEmpty(struct CircularQueue *queue)
{
    return queue->rear == NULL;
}

void enqueue(struct CircularQueue *queue, int data)
{
    struct Node *newNode = createNode(data);

    if (isEmpty(queue))
    {
        newNode->next = newNode;
        queue->rear = newNode;
    }
    else
    {
        newNode->next = queue->rear->next;
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
    printf("Front element: %d, Rear element: %d\n", queue->rear->next->data, queue->rear->data);
}

int dequeue(struct CircularQueue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is empty\n");
        return -1;
    }

    struct Node *frontNode = queue->rear->next;
    int dequeuedValue = frontNode->data;

    if (frontNode == queue->rear)
    {
        queue->rear = NULL;
    }
    else
    {
        queue->rear->next = frontNode->next;
    }
    free(frontNode);

    // Check if queue->rear is not NULL before accessing its data
    if (queue->rear != NULL)
    {
        printf("Front element: %d, Rear element: %d\n", queue->rear->next->data, queue->rear->data);
    }
    else
    {
        printf("Queue is now empty\n");
    }

    return dequeuedValue;
}

void displayCircularQueue(struct CircularQueue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is empty\n");
        return;
    }

    struct Node *current = queue->rear->next;
    printf("Circular Queue: ");

    do
    {
        printf("%d ", current->data);
        current = current->next;
    } while (current != queue->rear->next);

    printf("\n");
}

void freeCircularQueue(struct CircularQueue *queue)
{
    while (!isEmpty(queue))
    {
        dequeue(queue);
    }
    free(queue);
}

int main()
{
    struct CircularQueue *queue = createCircularQueue();
    int choice, element;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element to enqueue: ");
            scanf("%d", &element);
            enqueue(queue, element);
            break;
        case 2:
            element = dequeue(queue);
            if (element != -1)
            {
                printf("Dequeued element: %d\n", element);
            }
            break;
        case 3:
            displayCircularQueue(queue);
            break;
        case 4:
            freeCircularQueue(queue);
            getch();
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}
