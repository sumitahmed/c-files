//wap to accept two integers and store square of first value and cube of second value. two modification should be made using pointers 
// sample input - int a, int b,
// output a*a,b*b*b
//PASS BY REFERENCE
#include <stdio.h>
void update (int *, int *);
void main()
{
    int a,b;
    printf("enter the values of a,b");
    scanf("%d ,%d"  ,&a ,&b );
    update(&a,&b);
    printf("\n after update ");
    printf("\n %d, %d",a,b);

    //square of the first value

}
void update (int *x, int *y)
{
    *x = *x * *x; *y = *y * *y * *y;
    //square of the first value
    printf("sqaure of the firts value is %d", *x);
    //cube of the first second value
    printf("cube of the first second value is %d", *y);

}
