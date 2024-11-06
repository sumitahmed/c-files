#include <stdio.h>
#include <string.h>

//1-strlen - String Length
size_t strlen(const char *str);
//This function returns the length of the input string (excluding the null character '\0').


int main() {
    char str[] = "Hello, World!";
    size_t length = strlen(str);

    printf("Length of the string: %zu\n", length);

    return 0;
}
//2. strcpy - String Copy
#include <string.h>

char* strcpy(char *dest, const char *src);
//This function copies the contents of the source string to the destination string.
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    strcpy(destination, source);

    printf("Copied string: %s\n", destination);

    return 0;
}
//3. strcat - String Concatenationstrcat 
#include <string.h>

char* strcat(char *dest, const char *src);

#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Hello, ";
    char src[] = "World!";

    strcat(dest, src);

    printf("Concatenated string: %s\n", dest);

    return 0;
}
//4. strcmp - String Comparison
#include <string.h>

int strcmp(const char *str1, const char *str2);
//This function compares two strings lexicographically. It returns an integer less than, equal to, 
//or greater than zero if the first string is found to be less than, equal to, or greater than the second string.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "orange";

    int result = strcmp(str1, str2);

    if (result < 0) {
        printf("%s comes before %s\n", str1, str2);
    } else if (result > 0) {
        printf("%s comes after %s\n", str1, str2);
    } else {
        printf("%s is equal to %s\n", str1, str2);
    }

    return 0;
}
//5. strtok - String Tokenization
#include <string.h>

char* strtok(char *str, const char *delimiters);
//This function breaks the input string into a series of tokens based on the specified delimiters.
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "apple,orange,banana";
    char *token = strtok(str, ",");

    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }

    return 0;
}

