//wap to dispaly first 10 terms of the series 0,3,8,15,...99.
#include <stdio.h>

void display(int n, int i)

int main()
{
    int n,i;
    display(n,i);
    printf("The first 10 terms of the series are:\n");

}
void display(int n, int i)
{
     if (n > 0) {
        display(n - 1);
        int i = n * n - 1;
        printf("%d ", i);
    }
}
