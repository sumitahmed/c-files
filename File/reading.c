/*reading a file*/
#include <stdio.h>
 
int main()
{
    FILE *ptr;
    ptr = fopen("example.txt", "r");
    char str[128];
    fscanf(ptr, "%s", str);
    printf("%s", str);
}