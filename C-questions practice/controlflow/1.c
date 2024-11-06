// C program to Find the Largest Number Among Three Numbers//
#include <stdio.h>
int main()
{

    int a, b, c;
    printf("enter the value\n:");
    scanf("%d", &a);
    printf("enter the value\n:");
    scanf("%d", &b);
    printf("enter the value\n:");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("largeset num is %d", a);
    }
    else if (b > a && b > c)
    {
        printf("largeset num is %d", b);
    }
    else if (c > a && c > b)
    {

        printf("largeset num is %d", c);
    }

    return 0;
}