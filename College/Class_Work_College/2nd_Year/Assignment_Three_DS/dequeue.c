#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the deque
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Structure to represent the deque
struct Deque {
    struct Node* front;
    struct Node* rear;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to initialize a deque
struct Deque* createDeque() {
    struct Deque* deque = (struct Deque*)malloc(sizeof(struct Deque));
    deque->front = NULL;
    deque->rear = NULL;
    return deque;
}

// Function to check if the deque is empty
int isEmpty(struct Deque* deque) {
    return deque->front == NULL;
}

// Function to add an element to the front of the deque
void enqueueFront(struct Deque* deque, int data) {
    struct Node* newNode = createNode(data);
    if (isEmpty(deque)) {
        deque->front = newNode;
        deque->rear = newNode;
    } else {
        newNode->next = deque->front;
        deque->front->prev = newNode;
        deque->front = newNode;
    }
}

// Function to add an element to the rear of the deque
void enqueueRear(struct Deque* deque, int data) {
    struct Node* newNode = createNode(data);
    if (isEmpty(deque)) {
        deque->front = newNode;
        deque->rear = newNode;
    } else {
        newNode->prev = deque->rear;
        deque->rear->next = newNode;
        deque->rear = newNode;
    }
}

// Function to remove an element from the front of the deque
int dequeueFront(struct Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque is empty\n");
        return -1; // Return a value to indicate empty deque
    }
    struct Node* frontNode = deque->front;
    int dequeuedValue = frontNode->data;
    deque->front = deque->front->next;
    if (deque->front != NULL) {
        deque->front->prev = NULL;
    } else {
        deque->rear = NULL;
    }
    free(frontNode);
    return dequeuedValue;
}

// Function to remove an element from the rear of the deque
int dequeueRear(struct Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque is empty\n");
        return -1; // Return a value to indicate empty deque
    }
    struct Node* rearNode = deque->rear;
    int dequeuedValue = rearNode->data;
    deque->rear = deque->rear->prev;
    if (deque->rear != NULL) {
        deque->rear->next = NULL;
    } else {
        deque->front = NULL;
    }
    free(rearNode);
    return dequeuedValue;
}

// Function to display the elements of the deque
void displayDeque(struct Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque is empty\n");
        return;
    }
    struct Node* current = deque->front;
    printf("Deque: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to free the memory used by the deque
void freeDeque(struct Deque* deque) {
    while (!isEmpty(deque)) {
        dequeueFront(deque);
    }
    free(deque);
}

int main() {
    struct Deque* deque = createDeque();

    enqueueFront(deque, 2);
    enqueueFront(deque, 1);
    enqueueRear(deque, 3);

    displayDeque(deque);

    printf("Dequeued from front: %d\n", dequeueFront(deque));
    printf("Dequeued from rear: %d\n", dequeueRear(deque));

    displayDeque(deque);

    freeDeque(deque);

    return 0;
}
