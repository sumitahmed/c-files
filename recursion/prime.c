#include<stdio.h>

int main()
{
    int num,c,f=1;
    int prime(int,int);
    printf("\n enter the number");
    scanf("%d",&num);
    c=prime(num,f);
    if (c==2)
     printf(" prime number");
   else
    printf(" not a prime number");
   return 0;
}
int prime(int n,int f)
{
    static int c=0;
    if (f>n)
     return c;
    else
     {
        if(n%f==0)
         c++;
        return(prime(n,++f));
     }
}