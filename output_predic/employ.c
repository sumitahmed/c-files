#include <stdio.h>

int main() {
    struct employee
    {
        char name[25];
        int age;
        float bs;
    }; // Semicolon added here

    struct employee e;
    strcpy(e.name, "hacker"); // Use strcpy to copy the string
    e.age = 25;
    printf("%s %d", e.name, e.age);
    return 0;
}
