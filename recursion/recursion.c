#include<stdio.h>
int main()
{
    int n = 31, m = 51;
    display(n,m);
}
void display(int n, int m)
{
    if (n == 31 && m == 51)
    printf(" \n %d,%d" n,m)
else
{
    printf((" \n %d,%d" n,m)
    display(n+2,m-2);
}
}