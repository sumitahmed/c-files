//s=3+6+9+12....+45
#include <stdio.h>

// Function prototype for calculateSum
int calculateSum(int n);

int main() {
    // Input: The value of n for the series
    int n=3;

    
    // Call the recursive function to calculate the sum
    int result = calculateSum(n);

    // Display the result
    printf("Sum of the series 3+6+9+12....+45 %d is: %d\n", n, result);

    return 0;
}

// Recursive function to calculate the sum of the series
int calculateSum(int n) {
    // Base case: if n is 0, return 0
    if (n == 45) {
        return n;
    } else {
        // Recursive case: calculate sum of series for n-1 and add n to it
        return n + calculateSum(n + 3);
    }
}