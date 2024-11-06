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
        printf("5: Insert Before:\n");
        printf("6: Insert After:\n");
        printf("7: Delete Beginning:\n");
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
            // case 10:
            //     start = delete_after(start);
            //     break;
            // case 11:
            //     start = delete_list(start);
            //     break;
            // case 12:
            //     start = sort_list(start);
            //     break;
        }
    } while (option != 10);

    return 0;
}

struct node *create_ll(struct node *start)
{
    struct node *new_node, *ptr;
    int num;
    printf("\nEnter -1 to end");
    printf("\nEnter the number to be inserted in the linked list: ");
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
        printf("\nEnter the next number to be inserted (or -1 to end): ");
        scanf("%d", &num);
    }
    return start;
}

struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    if (ptr == NULL)
    {
        printf("\nList is empty\n");
        return start;
    }
    printf("\nLinked list: ");
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
    printf("\n enter the data to be inserted:");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = num;
    new_node->next = start;
    start = new_node;
    return start;
}
struct node *insert_end(struct node *start)
{
    struct node *new_node, *ptr;
    int num;
    printf("\n Enter the number to be inserted:");
    scanf("%d", &num);

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
    return start;
}

struct node *insert_before(struct node *start)
{
    int num,val;
    struct node *new_node,*ptr,*preptr;

    printf("\n Enter the data:");
    scanf("%d",&num);

    printf("\n Enter the val for which the data ha sto be stored before:");
    scanf("%d",&val);

    new_node =(struct node *)malloc(sizeof(struct node));
    new_node->data =num;

    ptr=start;
    while(ptr->data !=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=new_node;
    new_node->next=ptr;

    return start;
}

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

struct node *delete_beg(struct node *start)
{
    struct node *ptr;
    ptr=start;
    start=start->next;
    free(ptr);
    return start;
}

struct node *delete_end(struct node *start)
{
    struct node *ptr,*preptr;
    ptr=start;
    while(ptr->next !=NULL)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
    return start;
}