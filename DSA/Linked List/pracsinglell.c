#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

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
    int option;

    do
    {
        printf("1: Create Linked list:\n");
        printf("2: Display List:\n");
        printf("3: Insert at beginning:\n");
        printf("4: Insert end: \n");
        printf("5: Inster Before:\n");
        printf("6: Insert After:\n");
        printf("7: Delete Begining:\n");
        printf("8: Delete End:\n");
        printf("9: Delete a specific Node:\n");
        printf("10: Delete after a specific Node:\n");
        printf("11: Delete List: \n");
        printf("12: Sort list: \n");
        printf("13: Exit:\n");

        printf("\tEnter your option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            start = create_ll(start);
            printf("\nLinked list created\n");
            break;
        case 2:
            start = display(start);
            break;
        case 3:
            start = insert_beg(start);
            break;
        case 4:
            start = insert_end(start);
            break;
        case 5:
            start = insert_before(start);
            break;
        case 6:
            start = insert_after(start);
            break;
        case 7:
            start = delete_beg(start);
            break;
        case 8:
            start = delete_end(start);
            break;
        case 9:
            start = delete_node(start);
            break;
        case 10:
            start = delete_after(start);
            break;
        case 11:
            start = delete_list(start);
            break;
        case 12:
            start = sort_list(start);
            break;
        }
    } while (option != 13);

    return 0;
}

struct node *create_ll(struct node *start)
{
    struct node *new_node, *ptr;
    int num;

    printf("\nEnter -1 to end");
    printf("\nEnter the data part: ");
    scanf("%d", &num);

    while (num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        new_node->next = NULL;
        if (start == NULL)
        {
            start = new_node;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
        }
        printf("\nEnter the data part: ");
        scanf("%d", &num);
    }

    return start;
}

struct node *display(struct node *start)
{
    struct node *ptr = start;
    printf("Linked List:\n");
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
    return start;
}

struct node *insert_beg(struct node *start)
{
    struct node *new_node;
    int num;

    // Prompt user for new node data
    printf("\nEnter the new node data: ");
    scanf("%d", &num);

    // Allocate memory for the new node
    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("Memory allocation failed\n");
        return start; // Return the original start if memory allocation fails
    }

    // Set the data and link the new node to the current start node
    new_node->data = num;
    new_node->next = start;

    // Update start to point to the new node
    start = new_node;

    return start;
}

struct node *insert_end(struct node *start)
{
    struct node *ptr, *new_node;
    int num;

    // Prompt for the data to be inserted
    printf("Enter the data to be inserted at the end: \n");
    scanf("%d", &num);

    // Allocate memory for the new node
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = NULL;

    // If the list is empty, the new node becomes the first node
    if (start == NULL)
    {
        start = new_node;
    }
    else
    {
        // Initialize ptr to start
        ptr = start;

        // Traverse the list until you reach the last node
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        // Insert the new node at the end
        ptr->next = new_node;
    }

    // Return the start pointer
    return start;
}

struct node *insert_before(struct node *start)
{
    struct node *ptr, *preptr, *new_node;
    int num, val;
    printf("\n Enter the new node data:");
    scanf("%d", &num);
    printf("\n Enter the value for which the daat has to be stored before: ");
    scanf("%d", &val);

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;

    ptr = start;

    while (ptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }

    preptr->next = new_node;
    new_node->next = ptr;

    return start;
}

struct node *insert_after(struct node *start)
{
    struct node *ptr, *new_node;
    int num, val;
    printf("\n Enter the new node data:");
    scanf("%d", &num);
    printf("\n Enter the value after new node daat has to be stored:");
    scanf("%d", &val);

    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = num;

    ptr = start;
    while (ptr->data != val)
    {
        ptr = ptr->next;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;

    return start;
}

struct node *delete_beg(struct node *start)
{
    struct node *ptr;

    ptr = start;
    start = start->next;
    printf("Deleted node with data: %d\n", ptr->data);

    free(ptr);

    return start;
}

struct node *delete_end(struct node *start)
{
    struct node *ptr, *preptr;

    ptr = start;
    while (ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr);

    return start;
}

struct node *delete_node(struct node *start)
{
    struct node *ptr, *preptr;
    int val;

    printf("\n Enter the data which has to be deleted:");
    scanf("%d", &val);
    ptr = start;

    if (ptr->data == val)
    {
        start = start->next;
        free(ptr);
        return start;
    }
    else
    {
        while (ptr->data != val)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        free(ptr);
        return start;
    }
}

struct node *delete_after(struct node *start)
{
    struct node *ptr, *preptr;
    int val;
    printf("\n Enter the value after the node has to be deleted:");
    scanf("%d", &val);

    ptr = start;
    preptr = ptr;

    while (ptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);

    return start;
}

struct node *delete_list(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr->next != NULL)
    {
        start = start->next;
        free(ptr);
    }
    return start;
}

struct node *sort_list(struct node *start)
{
    struct node *ptr1, *ptr2;
    int temp;

    ptr1 = start;
    while (ptr1->next != NULL)
    {
        ptr2 = ptr1->next;
        while (ptr2 != NULL)
        {
            if (ptr1->data > ptr2->data)
            {
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    return start;
}