#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the queue
struct Node {
    int data;
    struct Node* next;
};

// Structure to represent the circular queue
struct CircularQueue {
    struct Node* rear;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to initialize a circular queue
struct CircularQueue* createCircularQueue() {
    struct CircularQueue* queue = (struct CircularQueue*)malloc(sizeof(struct CircularQueue));
    queue->rear = NULL;
    return queue;
}

// Function to check if the circular queue is empty
int isEmpty(struct CircularQueue* queue) {
    return queue->rear == NULL;
}

// Function to enqueue an element into the circular queue
void enqueue(struct CircularQueue* queue, int data) {
    struct Node* newNode = createNode(data);
    if (isEmpty(queue)) {
        newNode->next = newNode; // Point to itself in a circular manner
        queue->rear = newNode;
    } else {
        newNode->next = queue->rear->next;
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

// Function to dequeue an element from the circular queue
int dequeue(struct CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1; // Return a value to indicate empty queue
    }
    struct Node* frontNode = queue->rear->next;
    int dequeuedValue = frontNode->data;
    if (frontNode == queue->rear) {
        queue->rear = NULL;
    } else {
        queue->rear->next = frontNode->next;
    }
    free(frontNode);
    return dequeuedValue;
}

// Function to display the elements of the circular queue
void displayCircularQueue(struct CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }
    struct Node* current = queue->rear->next;
    printf("Circular Queue: ");
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != queue->rear->next);
    printf("\n");
}

// Function to free the memory used by the circular queue
void freeCircularQueue(struct CircularQueue* queue) {
    while (!isEmpty(queue)) {
        dequeue(queue);
    }
    free(queue);
}

int main() {
    struct CircularQueue* queue = createCircularQueue();

    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);

    displayCircularQueue(queue);

    printf("Dequeued element: %d\n", dequeue(queue));
    printf("Dequeued element: %d\n", dequeue(queue));

    displayCircularQueue(queue);

    freeCircularQueue(queue);

    return 0;
}