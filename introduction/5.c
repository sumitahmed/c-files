#include <stdio.h>

int main() {
    int int1, int2, int3, int4;

    printf("Enter 4 integers: ");
    scanf("%d %d %d %d", &int1, &int2, &int3, &int4);

    printf("%9d\n%9d\n%9d\n%9d\n", int1, int2, int3, int4);

    return 0;
}

