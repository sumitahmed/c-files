#include <stdio.h>
#include <string.h>

int main()
{
    char n[80], search[30], ch, wd[30];
    int i, l, j = 0, c = 0;

    printf("Enter the sentence:\n");
    scanf("%[^\n]", n);

    printf("\nEnter the word to search: ");
    scanf("%s", search);

    l = strlen(n);

    for (i = 0; i <= l; i++)
    {
        ch = n[i];
        if (ch != ' ' && ch != '\0')
        {
            wd[j++] = ch;
        }
        else
        {
            wd[j] = '\0';
            j = 0;
            if (strcmp(wd, search) == 0)
                c++;
        }
    }

    printf("Count = %d\n", c);

    return 0;
}
