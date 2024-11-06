#include <stdio.h>

void printSquare(int num) {
    printf("Square of %d is: %d\n", num, num * num);
}

int main() {
    // Call the function with arguments and without return value
    int number = 5;
    printSquare(number);
    return 0;
}
