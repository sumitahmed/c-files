// Q3. Write a C program for addition of two matrices.
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int i, j, r, c;

    printf("Enter the number of rows:\n");
    scanf("%d", &r);

    printf("Enter the number of columns:\n");
    scanf("%d", &c);

    printf("Enter the first matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the second matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }


    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nThe resultant matrix after addition is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
