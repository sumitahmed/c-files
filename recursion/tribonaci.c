#include<stdio.h>
int tribonacci(int n)
{
    if(n<=0)
    {
        printf("\n th term cant be negative");
        return -999;
    }
    else if(n==1||n==2)
     return 1;
    else if(n==3)
     return 2;
    else
     return(tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3));
}
void main()
{
    int num,s;
    printf("\n enter the value of n ");
    scanf("%d ",&num);
    s=tribonacci(num);
    printf("%d",s);
}