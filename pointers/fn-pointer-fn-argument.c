//wap a program that uses a function pointer as a function argument.
#include <math.h>
#include<stdio.h>
#define PI 3.14
double y(double);
double cos(double);
double table (double(*f)(),double,double,double);
void twice(int *);

main()
{
    int A[10],i;
    printf("table of y(x) = 2*x*x-x+1\n\n");
    table(y, 0.0, 2.0 , 0.5);
    printf("\n table of cos(x)\n\n");
    table (cos , 0.0, PI , 0.5);
    printf("\n enter 10 integers");
    for(i=0;i<10;i++)
    scanf("%d",&A[i]);
    twice(A);
    printf("\n after modification ");
    for(i=0;i<10;i++)
    printf("\n %d",A[i]); 
}
void twice(int *p)
{
    int i=0;
    for(i=0;i<10;i++)
     p[i]=2*p[i];
}
double table(double(*f)(),double min,double max,double step)
{
    double a,value;
    for(a=min;a<=max;a+=step)
    {
        value=(*f)(a);
        printf("5.2f %10.4f\n",a,value);
    }
}
double y(double x)
{
    return (2*x*x-x+1);
}