// Write a program to create a linked list and perform insertions and deletions of all cases.
// Write functions to sort and finally delete the entire list at once.
#include <stdio.h>
#include <stdlib.h>

// Definition of a node structure
struct node
{
    int data;          // Data part of the node
    struct node *next; // Pointer to the next node
};

// Global pointer to the start of the list
struct node *start = NULL;

// Function prototypes for various operations on the linked list
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);
struct node *sort_list(struct node *);

int main()
{
    int option; // Variable to store user option
    do
    {
        // Display the main menu
        printf("\n\n*****MAIN MENU*****");
        printf("\n1 : Create a list");
        printf("\n2 : Display the list");
        printf("\n3 : Add a node at the beginning");
        printf("\n4 : Add a node at the end");
        printf("\n5 : Add a node before a given node");
        printf("\n6 : Add a node after a given node");
        printf("\n7 : Delete a node from the beginning");
        printf("\n8 : Delete a node from the end");
        printf("\n9 : Delete a given node");
        printf("\n10 : Delete a node after a given node");
        printf("\n11 : Delete the entire list");
        printf("\n12 : Sort the list");
        printf("\n13 : Exit");
        printf("\n\nEnter your option: ");
        scanf("%d", &option); // Read user option

        // Perform the operation based on the user option
        switch (option)
        {
        case 1:
            start = create_ll(start); // Create the linked list
            printf("\nLINKED LIST CREATED");
            break;
        case 2:
            start = display(start); // Display the linked list
            break;
        case 3:
            start = insert_beg(start); // Insert a node at the beginning
            break;
        case 4:
            start = insert_end(start); // Insert a node at the end
            break;
        case 5:
            start = insert_before(start); // Insert a node before a given node
            break;
        case 6:
            start = insert_after(start); // Insert a node after a given node
            break;
        case 7:
            start = delete_beg(start); // Delete a node from the beginning
            break;
        case 8:
            start = delete_end(start); // Delete a node from the end
            break;
        case 9:
            start = delete_node(start); // Delete a specific node
            break;
        case 10:
            start = delete_after(start); // Delete a node after a given node
            break;
        case 11:
            start = delete_list(start); // Delete the entire list
            printf("\nLINKED LIST DELETED");
            break;
        case 12:
            start = sort_list(start); // Sort the linked list
            break;
        }
    } while (option != 13); // Exit if the option is 13

    return 0;
}

// Function to create a linked list
struct node *create_ll(struct node *start)
{
    struct node *new_node, *ptr;
    int num;
    printf("Enter -1 to end\n");
    printf("Enter the data part: ");
    scanf("%d", &num); // Read the data for the node

    while (num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node)); // Allocate memory for the new node
        new_node->data = num;                                  // Assign the data to the new node
        new_node->next = NULL;                                 // Initialize the next pointer to NULL

        if (start == NULL)
        {
            start = new_node; // If the list is empty, make this the first node
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next; // Traverse to the last node
            }
            ptr->next = new_node; // Attach the new node at the end
        }

        printf("Enter the data part: ");
        scanf("%d", &num); // Read the next data or -1 to end
    }

    return start; // Return the start of the list
}

// Function to display the linked list
struct node *display(struct node *start)
{
    struct node *ptr = start;
    printf("\nLinked list: ");

    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data); // Print the data of each node
        ptr = ptr->next;             // Move to the next node
    }
    printf("NULL\n"); // End of the list

    return start;
}

// Function to insert a node at the beginning of the list
struct node *insert_beg(struct node *start)
{
    struct node *new_node;
    int num;
    printf("\nEnter the data: ");
    scanf("%d", &num);                                     // Read the data for the new node
    new_node = (struct node *)malloc(sizeof(struct node)); // Allocate memory
    new_node->data = num;                                  // Assign the data
    new_node->next = start;                                // Link the new node to the first node
    start = new_node;                                      // Update start to point to the new node
    return start;
}

// Function to insert a node at the end of the list
struct node *insert_end(struct node *start)
{
    struct node *ptr, *new_node;
    int num;
    printf("\nEnter the data: ");
    scanf("%d", &num);                                     // Read the data for the new node
    new_node = (struct node *)malloc(sizeof(struct node)); // Allocate memory
    new_node->data = num;                                  // Assign the data
    new_node->next = NULL;                                 // Initialize next pointer to NULL
    ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next; // Traverse to the last node
    }
    ptr->next = new_node; // Attach the new node at the end
    return start;
}

// Function to insert a node before a given node
struct node *insert_before(struct node *start)
{
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf("\nEnter the data: ");
    scanf("%d", &num); // Read the data for the new node
    printf("\nEnter the value before which the data has to be inserted: ");
    scanf("%d", &val);                                     // Read the value before which to insert
    new_node = (struct node *)malloc(sizeof(struct node)); // Allocate memory
    new_node->data = num;                                  // Assign the data
    ptr = start;
    while (ptr->data != val)
    {
        preptr = ptr;    // Keep track of the previous node
        ptr = ptr->next; // Move to the next node
    }
    preptr->next = new_node; // Link the previous node to the new node
    new_node->next = ptr;    // Link the new node to the current node
    return start;
}

// Function to insert a node after a given node
struct node *insert_after(struct node *start)
{
    struct node *new_node, *ptr;
    int num, val;
    printf("\nEnter the data: ");
    scanf("%d", &num); // Read the data for the new node
    printf("\nEnter the value after which the data has to be inserted: ");
    scanf("%d", &val);                                     // Read the value after which to insert
    new_node = (struct node *)malloc(sizeof(struct node)); // Allocate memory
    new_node->data = num;                                  // Assign the data
    ptr = start;
    while (ptr->data != val)
    {
        ptr = ptr->next; // Move to the next node
    }
    new_node->next = ptr->next; // Link the new node to the node after current node
    ptr->next = new_node;       // Link the current node to the new node
    return start;

    // Step 1: Original List

    // [10] -> [20] -> [30] -> [40] -> NULL
    //           ^
    //          ptr

    // Step 2: Create New Node

    // new_node -> [25] -> NULL

    // Step 3: Update Pointers

    // [10] -> [20] -> [25] -> [30] -> [40] -> NULL
    //           ^       ^
    //          ptr   new_node
}

// Function to delete the first node from the list
struct node *delete_beg(struct node *start)
{
    struct node *ptr;
    ptr = start;         // Point to the first node
    start = start->next; // Update start to point to the second node
    free(ptr);           // Free the memory of the deleted node
    return start;
}

// Function to delete the last node from the list
struct node *delete_end(struct node *start)
{
    struct node *ptr, *preptr;
    ptr = start;
    while (ptr->next != NULL)
    {
        preptr = ptr;    // Keep track of the previous node
        ptr = ptr->next; // Move to the next node
    }
    preptr->next = NULL; // Unlink the last node
    free(ptr);           // Free the memory of the deleted node
    return start;
}

// Function to delete a specific node
struct node *delete_node(struct node *start)
{
    struct node *ptr, *preptr;
    int val;
    printf("\nEnter the value of the node which has to be deleted: ");
    scanf("%d", &val); // Read the value of the node to delete
    ptr = start;
    if (ptr->data == val)
    {
        start = delete_beg(start); // If it's the first node, delete it
        return start;
    }
    else
    {
        while (ptr->data != val)
        {
            preptr = ptr;    // Keep track of the previous node
            ptr = ptr->next; // Move to the next node
        }
        preptr->next = ptr->next; // Unlink the node to delete
        free(ptr);                // Free the memory of the deleted node
        return start;
    }
}

// Function to delete a node after a given node
struct node *delete_after(struct node *start)
{
    struct node *ptr, *preptr;
    int val;
    printf("\nEnter the value after which the node has to be deleted: ");
    scanf("%d", &val); // Read the value after which to delete
    ptr = start;
    preptr = ptr;
    while (preptr->data != val)
    {
        preptr = ptr;    // Keep track of the previous node
        ptr = ptr->next; // Move to the next node
    }
    preptr->next = ptr->next; // Unlink the node after the given node
    free(ptr);                // Free the memory of the deleted node
    return start;
}

// Function to delete the entire list
struct node *delete_list(struct node *start)
{
    struct node *ptr;
    if (start != NULL)
    {
        ptr = start;
        while (ptr != NULL)
        {
            printf("\n%d is to be deleted next", ptr->data); // Print the data to be deleted
            start = delete_beg(ptr);                         // Delete the first node repeatedly
            ptr = start;                                     // Move to the next node
        }
    }
    return start; // Return NULL, as the list is deleted
}

// Function to sort the linked list
struct node *sort_list(struct node *start)
{
    struct node *ptr1, *ptr2;
    int temp;
    ptr1 = start;
    while (ptr1->next != NULL)
    {
        ptr2 = ptr1->next; // Start comparing with the next node
        while (ptr2 != NULL)
        {
            if (ptr1->data > ptr2->data)
            {
                temp = ptr1->data; // Swap the data if the current node is greater
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->next; // Move to the next node
        }
        ptr1 = ptr1->next; // Move to the next node
    }
    return start; // Return the sorted list
}
