/*Wap to identify one user given positive integer is prime or not*/
#include <stdio.h>
int main()
{
    int num,i;
    printf("entyer the number:\n");
    scanf("%d", &num);

    for(i=2;i<num;i+=2)
    {
        if(num%i==0)
        break;
    }
    if(i==num)
    printf("the number:%d is prime",num);
    else
    printf("the number:%d is not prime",num);
    return 0;
}