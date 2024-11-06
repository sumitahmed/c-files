/*appending a file*/
#include <stdio.h>
 
int main()
{
    FILE *ptr;
    ptr = fopen("example.txt", "a");
    char str[128] = "Hello World!";
    fprintf(ptr, "%s", str);
}