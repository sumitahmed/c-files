//Q1. Write a C program to read n numbers from one dimensional array and display it.//
#include <stdio.h>

int main() {
    int a[10], n, i;

    printf("Enter the number of terms to be stored in the array (max 10):\n");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("The numbers in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
