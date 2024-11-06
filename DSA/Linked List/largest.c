#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of the linked list
void insert(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to find the largest element in the linked list
int findLargest(struct Node* head) {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return -1; // Return a sentinel value to indicate an empty list
    }

    int largest = head->data;
    struct Node* current = head->next;

    while (current != NULL) {
        if (current->data > largest) {
            largest = current->data;
        }
        current = current->next;
    }

    return largest;
}

int main() {
    struct Node* head = NULL;

    // Example: Insert elements into the linked list
    insert(&head, 10);
    insert(&head, 25);
    insert(&head, 7);
    insert(&head, 42);
    insert(&head, 15);

    // Find the largest element
    int largestElement = findLargest(head);
    if (largestElement != -1) {
        printf("The largest element in the linked list is: %d\n", largestElement);
    }

    // Clean up: Free memory
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
