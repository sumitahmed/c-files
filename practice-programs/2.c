/*Read in 3 integers and print a message if any one of them is equal to the sum of the other two*/
#include <stdio.h>
int main()
{
    int a,b,c; 
    printf("\n enter three integer valyues:");
    scanf("%d %d %d", &a, &b, &c);
    if
    (a==b+c || b==c+a || c==a+b){
    printf("equal\n");
    }
    else {
    printf("not equal\n");
    }

    
return 0;
}
