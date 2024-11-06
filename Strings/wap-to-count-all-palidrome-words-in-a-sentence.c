//wap-to-count-all-palidrome-words-in-a-sentence
#include<stdio.h>
#include<string.h>

int main() {
    char st[30], rev[30];
    int i, l = 0, j = 0, count = 0;

    printf("\nEnter any word: ");
    gets(st);

    l = strlen(st);

    for (i = l - 1; i >= 0; i--)
        rev[j++] = st[i];

    rev[j] = '\0';

    printf("\nReverse word: %s", rev);

    if (strcmp(rev, st) == 0) {
        printf("\nIt is a palindrome word: %s\n", st);
        count++;
    } else {
        printf("\nIt is not a palindrome word: %s\n", st);
    }

    printf("Total palindrome words in the sentence: %d\n", count);

    return 0;
}
