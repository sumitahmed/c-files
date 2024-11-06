//s=1+2+3+...+n Recursive method with return value
#include <stdio.h>

// Function prototype for calculateSum
int calculateSum(int n);

int main() {
    // Input: The value of n for the series
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Call the recursive function to calculate the sum
    int result = calculateSum(n);

    // Display the result
    printf("Sum of the series 1 + 2 + 3 + ... + %d is: %d\n", n, result);

    return 0;
}

// Recursive function to calculate the sum of the series
int calculateSum(int n) {
    // Base case: if n is 0, return 0
    if (n == 0) {
        return 0;
    } else {
        // Recursive case: calculate sum of series for n-1 and add n to it
        return n + calculateSum(n - 1);//similar to a+(n-1)*d
    }
}
