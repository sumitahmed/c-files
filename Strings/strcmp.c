#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    // Getting the first string from the user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    // Removing the newline character if present
    str1[strcspn(str1, "\n")] = '\0';

    // Getting the second string from the user
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Removing the newline character if present
    str2[strcspn(str2, "\n")] = '\0';

    // Comparing the strings
    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    return 0;
}

