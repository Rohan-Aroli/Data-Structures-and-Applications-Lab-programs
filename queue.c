#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Define maximum size for the queue

// Global variables for the queue, front, and rear
int queue[MAX];
int front = -1, rear = -1;

// Function prototypes
void insert();
void deleteItem();
void display();

int main() {
    int choice;

    while (1) {
        // Menu
        printf("\nQueue Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Switch case for operations
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                deleteItem();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Function to insert an element into the queue
void insert() {
    if (rear == MAX - 1) {
        printf("The queue is full. Cannot insert new elements.\n");
        return;
    }

    int item;
    printf("Enter the element to be inserted: ");
    scanf("%d", &item);

    if (front == -1) {
        front = 0;  // Initialize front if inserting the first element
    }
    rear += 1;
    queue[rear] = item;

    printf("Inserted %d into the queue.\n", item);
}

// Function to delete an element from the queue
void deleteItem() {
    if (front == -1 || front > rear) {
        printf("The queue is empty. Nothing to delete.\n");
        return;
    }

    int item = queue[front];
    printf("Deleted %d from the queue.\n", item);
    front += 1;

    // Reset front and rear if the queue becomes empty
    if (front > rear) {
        front = rear = -1;
    }
}

// Function to display the elements of the queue
void display() {
    if (front == -1 || front > rear) {
        printf("The queue is empty. Nothing to display.\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

