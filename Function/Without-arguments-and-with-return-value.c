#include <stdio.h>

int getRandomNumber() {
    return rand(); // Assuming you want a random number
}

int main() {
    // Call the function without arguments and with return value
    int randomNum = getRandomNumber();
    printf("Random Number: %d\n", randomNum);
    return 0;
}
