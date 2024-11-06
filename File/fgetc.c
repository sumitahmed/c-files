/*fgetc*/

#include <stdio.h>
 
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("example.txt", "r");
    char c = fgetc(ptr);
    printf("the character i read was %c\n",c);
    c = fgetc(ptr);
    printf("the character i read was %c\n",c);
    
    fclose(ptr);
    return 0;
}