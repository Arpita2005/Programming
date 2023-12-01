/*Write a program in C  to implement Circular Queue data structure using array with the following operations -
•	Insert ( ) to insert an element at the rear end
•	Delete ( ) to remove an element at the front end
•	Traverse ( ) to show all the  unprocessed elements in the queue
*/
#include<stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1; // Initialize front and rear pointers...Global variabless

void insert(int value)// Function we are using to insert an element at the rear
{
    if (rear == MAX_SIZE - 1)
    {
        printf("the queue is full ..so unable to insert.\n");
        return;
    }
    if (front == -1)
    {
        front = 0; // Initialize front for the first element
    }
    rear++; // Move rear to the next position
    queue[rear] = value; // Insert the value at the rear
    printf("Inserted: %d\n", value);
}

// Function to remove an element from the front end
void delete() {
    if (front == -1) {
        printf("Queue is empty. Cannot delete.\n");
        return;
    }
    printf("Deleted: %d\n", queue[front]); // Print the element being deleted
    front++; // Move front to the next position
    if (front > rear) {
        front = rear = -1; // Reset front and rear when queue becomes empty
    }
}

// Function to show all the unprocessed elements in the queue
void traverse() {
    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]); // Print each element in the queue
    }
    printf("\n");
}

int main() {
    int choice, value;

    do {
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                delete();
                break;
            case 3:
                traverse();
                break;
            case 4:
                printf("Exiting.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
