#include<stdio.h>
#include<stdlib.h> // Include stdlib.h for EOF definition

int main() {
    FILE *f1;
    char c;

    f1 = fopen("student", "w");
    printf("Data input\n");
    c = getchar();
    while (c != EOF) {
        putc(c, f1);
        c = getchar();
    }
    fclose(f1);

    printf("\nData output\n");
    f1 = fopen("student", "r");
    // Corrected the loop condition
    while ((c = getc(f1)) != EOF)
        printf("%c", c);
    fclose(f1);

    return 0;
}
