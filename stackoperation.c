#include<stdio.h>
#include<stdlib.h>
#define max 5

int a[max], top = -1;

void push();
void pop();
void palindrome();
void display();

void main() {
    int choice, i;

    while (1) {
        printf("Please enter your choice \n");
        printf("1 to push, 2 to pop, 3 to check palindrome, 4 to display the current stack, 5 to quit.\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                palindrome();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Please enter a valid choice\n");
        }
    }
}

void push() {
    int i, item;
    if (top == max - 1) {
        printf("Stack overflow!\n");
        return;
    }
    printf("Enter the element to be pushed: ");
    scanf("%d", &item);
    top += 1;
    a[top] = item;
}

void pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return;
    }
    int elem = a[top];
    printf("The element %d has been deleted\n", elem);
    top -= 1;
}

void palindrome() {
    int flag = 1, i;

    for (i = 0; i <= top / 2; i++) {
        if (a[i] != a[top - i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 0)
        printf("Not a palindrome\n");
    else
        printf("Palindrome\n");
}

void display() {
    int i;
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Current stack elements:\n");
    for (i = 0; i <= top; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

