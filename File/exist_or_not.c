#include <stdio.h>

int main() {
    FILE *filePointer;
    char fileName[100];

    // Get the file name from the user
    printf("Enter the file name: ");
    scanf("%s", fileName);

    // Try to open the file
    filePointer = fopen(fileName, "r");

    // Check if file exists
    if (filePointer == NULL) {
        printf("File '%s' does not exist or cannot be opened.\n", fileName);
    } else {
        printf("File '%s' exists.\n", fileName);
        fclose(filePointer); // Close the file
    }

    return 0;
}
