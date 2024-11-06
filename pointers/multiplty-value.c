//wap to accept an arary of size n and multiply each value with 1 in a separate method named update (int* .int )
//now display the final array in both main() and funtion().
#include <stdio.h>

// Function prototypes
void update(int *, int);
void display(int *, int);

// Main function
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Array inside main function before update: ");
    display(arr, n);

    update(arr, n);

    printf("Array inside main function after update: ");
    display(arr, n);

    return 0;
}

// Function to update each value of the array
void update(int *arr, int n)
{
    for (int i = 0; i < n; ++i) {
        *(arr + i) *= 1; // Multiplying each value by 1 (no change)
    }
    printf("\n"); // For spacing
}
void display(int *arr, int n)
{
    printf("[");
    for (int i = 0; i < n; ++i) {
        printf("%d", arr[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("]\n");
}