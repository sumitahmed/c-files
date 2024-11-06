/*fgets*/

#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("example.txt", "r+");
    // char * c = fgetc(ptr);
    // printf("The character I read was %c\n", c );
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c );


    char str[69];
    fgets(str, 70, ptr);
    printf("The string is %s\n", str);

    // fputc('o',ptr);
    // fputs("this is harry",ptr);



    fclose(ptr);
    return 0;
}
