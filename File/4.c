#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    int i;
    char word[15];

    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1], "w");
    if (fp == NULL) {
        printf("Error opening file %s\n", argv[1]);
        return 1;
    }

    printf("\nNo. of arguments in command line = %d \n\n", argc);
    for (i = 2; i < argc; i++) {
        fprintf(fp, "%s ", argv[i]); // Moved inside loop
    }
    fclose(fp);
    
    printf("Contents of %s file\n\n", argv[1]);
    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Error opening file %s\n", argv[1]);
        return 1;
    }

    for (i = 2; i < argc; i++) {
        fscanf(fp, "%s", word);
        printf("%s ", word);
    }
    fclose(fp);
    printf("\n\n");

    for (i = 0; i < argc; i++) { // Corrected loop
        printf("%d %s \n", i*5, argv[i]); // Corrected printf format
    }
    return 0;
}

