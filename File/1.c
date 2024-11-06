
#include <stdio.h>

int main() {
    FILE *source, *target;
    int count = 0;
    char c;
    int F[100];

    printf("\n \n contents of text");

    source = fopen("text", "r");
    if (source == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    while ((c = getc(source)) != EOF && count < 100) {
        F[count] = c;
        count++;
    }

    fclose(source);

    target = fopen("text", "w");
    if (target == NULL) {
        printf("Error opening target file.\n");
        return 1;
    }

    while (count > 0) {
        count--;
        putc(F[count], target);
    }

    fclose(target);

    return 0;
}
