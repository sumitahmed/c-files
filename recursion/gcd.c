
#include<stdio.h>
int gcd(int,int);
int main()
{
    int num1,num2,res;
    printf("\n enter any two numbers (greater number followed by smaller) ");
    scanf("%d,%d",&num1,&num2);
    res=gcd(num1,num2);
    printf("%d",res);
 }
 int gcd(int n1,int n2)
 {
    int r;
    r=n1%n2;
    if(r==0)
     return n2;
    else
     {
        n1=n2;
        n2=r;
        return gcd(n1,n2);
     }
 }