#include <stdio.h>
#define MAX 10  // Maximum size of the queue

int queue[MAX];
int front = -1, rear = -1;

void insert(int num);
void display(void);

int main() {
    // Insert the elements 12, 16, 50, 18, 89
    insert(12);
    insert(16);
    insert(50);
    insert(18);
    insert(89);

    // Display the queue
    display();

    return 0;
}

// Function to insert an element into the queue
void insert(int num) {
    if(rear == MAX-1)
        printf("\n OVERFLOW");
    else if(front == -1 && rear == -1) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = num;
}

// Function to display the queue
void display() {
    if(front == -1 || front > rear) {
        printf("\n QUEUE IS EMPTY");
    } else {
        printf("\n Queue elements are: ");
        for(int i = front; i <= rear; i++) {
            printf("\t %d", queue[i]);
        }
    }
}
