//wap to accept an array of sizw n in main method and sent the array in another method count (int*)
// now within the method count all the even values within the array and return them.
#include <stdio.h>

// Function prototype
int count(int *, int);

// Main function
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int evenCount = count(arr, n);//int evenCount = count(arr, n);: This line calls the function count() with two arguments: the array arr and its size n. The return value of the function is stored in the variable evenCount. This line effectively counts the number of even values in the array.
    printf("Number of even values in the array: %d\n", evenCount);

    return 0;
}

// Function to count even values in the array
int count(int *arr, int n) {
    int evenCount = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
    }
    return evenCount;
}
