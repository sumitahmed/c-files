/*writing a file*/
#include <stdio.h>
 
int main()
{
    FILE *ptr;
    ptr = fopen("example.txt", "w");
    char str[128] = "Hello World!";
    fprintf(ptr, "%s", str);
}