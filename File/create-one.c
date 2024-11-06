#include <stdio.h>

int main() {
    FILE *filePointer;
    char fileName[100];

    // Get the file name from the user
    printf("Enter the file name to create: ");
    scanf("%s", fileName);

    // Try to create the file
    filePointer = fopen(fileName, "w");

    // Check if file creation was successful
    if (filePointer == NULL) {
        printf("File creation failed.\n");
    } else {
        printf("File '%s' created successfully.\n", fileName);
        fclose(filePointer); // Close the file
    }

    return 0;
}
