// What is Fibonacci Series?
// The Fibonacci series is the sequence where each number is the sum of the previous two numbers of the sequence. The first two numbers of the Fibonacci series are 0 and 1 and are used to generate the Fibonacci series.

// In mathematical terms, the number at the nth position can be represented by:

// Fn = Fn-1 + Fn-2
// with seed values, F0 = 0 and F1 = 1.

// For example, Fibonacci series upto 10 terms is: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
#include <stdio.h>
int main()
{

    int i, next, n = 10;
    int a = 0, b = 1;
    printf("THE fibonaci serries is:%d %d\n", n);
    printf("%d %d\n", a, b);
    for(i =2;i<= n;++i)
    {
        next = a + b;
        printf("%d\n", next);
        a = b;
        b = next;
    }

    return 0;
}