//wap to dispaly first 10 terms of the series 1,8,27,64...1000
#include <stdio.h>

void display(int n, int i);

int main()
{
    int n = 10; 
    int i = 1;  
    printf("The first 10 terms of the series are:\n");
    display(n, i);
    
    return 0;
}

void display(int n, int i)
{
    if (n > 0)
    {
        printf("%d ", i * i * i); 
        display(n - 1, i + 1);    
    }
}
