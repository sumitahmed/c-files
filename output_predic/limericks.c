#include <stdio.h>

int main() {
    static char str[]= "limericks";
    char *s;
    s=&str[6]-6;
    while(*s)
    printf("%c",*s++);
    return 0;
}
