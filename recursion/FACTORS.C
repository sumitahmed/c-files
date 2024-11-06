#include<stdio.h>
int factors(int n)
{
   printf("\n enter the number");
   scanf("%d",&n);
    if(n%2==0)
    {
        printf("\nthe factors are", n);
        
    }
    
    else
      printf("\nthis are not the factors");
    return 0;
}
