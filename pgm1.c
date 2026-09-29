#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int A[SIZE];
int top = -1;



void push(int value);
void pop();
void display();

int main() {
    int value, choice;

    while(1) {
        printf("\n-------------------Menu-------------------- \n");
        printf("1. Push \n2. Pop \n3. Display \n4. Exit \n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid Input!!!\n");
        }
    }
    return 0;
}


void push(int value) {
    if (top == SIZE - 1) {
        printf("Insertion Cannot be done. Stack Overflow!\n");
    } else {
        top++;
        A[top] = value;
        printf("Inserted Successfully\n");
    }
}


void pop() {
    if (top == -1) {
        printf("Deletion Cannot be done. Stack Underflow!\n");
    } else {
        printf("Deleted Item is: %d\n", A[top]);
        top--;
    }
}


void display() {
    if (top == -1) {
        printf("Stack is Empty\n");
    } else {
        printf("Stack Elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", A[i]);
        }
    }
}
