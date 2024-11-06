#include <stdio.h>

double square(double x)
{
   double result = x * x;/* also can write (return x*x) */
   return result;/* also can write (return x*x) */
}

int main()
{
   double x = square(3.14);
   printf("%lf", x);

   return 0;
}