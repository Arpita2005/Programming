#include <stdio.h>
#include<conio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void insert(int value) 
{
    if (rear == MAX_SIZE - 1) 
    {
        printf("Queue is full. Cannot insert.\n");
        return;
    }

    if (front == -1) 
    {
        front = 0;
    }
    rear++;
    queue[rear] = value;
    printf("%d inserted into the queue.\n", value);
}

void delete() {
    if (front == -1) 
    {
        printf("Queue is empty. Cannot delete.\n");
        return;
    }

    int delete = queue[front];
    front++;

    printf("%d deleted from the queue.\n", delete);

}

void traverse() {
    if (front == -1) 
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) 
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) 
    {
        printf("\nQueue Operations:\n");
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
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please choose a valid option.\n");
        }
    }
    getch();
    return 0;
}
