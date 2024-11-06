/*wap that promt the user for two files, one contaiing a line of text knoes as source file and other,an  empty file known as target
and then copies the content of source file into target file*/
#include <stdio.h>

int main() {
    FILE *source, *target;
    char filename_source[100], filename_target[100]; // Arrays to store file names
    char c;

    // Prompt user for source file name
    printf("Enter the name of the source file: ");
    scanf("%s", filename_source);

    // Open source file for reading
    source = fopen(filename_source, "r");
    if (source == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Prompt user for target file name
    printf("Enter the name of the target file: ");
    scanf("%s", filename_target);

    // Open target file for writing
    target = fopen(filename_target, "w");
    if (target == NULL) {
        printf("Error opening target file.\n");
        fclose(source);
        return 1;
    }

    // Copy content from source to target
    while ((c = fgetc(source)) != EOF) {
        fputc(c, target);
    }

    // Close files
    fclose(source);
    fclose(target);

    printf("File copied successfully.\n");

    return 0;
}
