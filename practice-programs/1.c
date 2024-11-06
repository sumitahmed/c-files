/*Read in three integers and print their average*/
#include <stdio.h>
int main()
{
    int a,b,n; 
    float avg=0;
    printf("\n enter three integer valyues:");
    scanf("%d %d %d", &a, &b, &n);
    avg = (a+b+n)/3.0;
    printf("the avg is:%.2f \n", avg);

return 0;
}
