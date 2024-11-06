//s= 1+(1+2)+(1+2+3)+...+n
#include <stdio.h>

// Function prototype for calculateSum
int calculateSum(int n,int t);

int main() {
    // Input: The value of n for the series
    int n,i=1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Call the recursive function to calculate the sum
    int result = calculateSum(n,i);

    // Display the result
    printf("Sum of the series 1+(1+2)+(1+2+3)+...+n %d is: %d\n", n, result);

    return 0;
}

// Recursive function to calculate the sum of the series
int calculateSum(int n,int t) {
    // Base case: if n is 0, return 0
    static int s=0;
    if (t==n) {
        return s+n;
    } else {
        // Recursive case: calculate sum of series for n-1 and add n to it
        s=s+t;t++;
        return  calculateSum(n,t)  ;
    }
}
