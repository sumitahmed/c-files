#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 1000

int countWords(const char* str);

int main() {
    char input[MAX_LENGTH];

    printf("Enter a sentence: ");
    fgets(input, MAX_LENGTH, stdin);

    int wordCount = countWords(input);
    printf("Number of words: %d\n", wordCount);

    return 0;
}

int countWords(const char* str) {
    int count = 0;
    int inWord = 0;

    while (*str) {
        if (isspace(*str)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
        str++;
    }

    return count;
}
