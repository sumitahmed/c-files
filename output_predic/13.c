#include <stdio.h>

int main() {
     int x = 2, y=4;
     x = x++ + ++y;
     printf("%d %d", x,y);
    return 0;
}
