# include<stdio.h>
void compare (int *, int *); /*prototype*/
void main()
{
    int x, y;
    x= 100;
    y = 200;
    printf("before exchange : x=%d y= %d\n\n ,x,y");
    compare(&x,&y); /*call*/
    //printf("after exchange :x = %d y= %d\n\n",x,y);
}
void compare(int *a,int *b)
{
   if(*a>*b) 
    printf("\n highest value is %d",*a);
   else if (*b>*a)
    printf("\n highest value is %d",*b);
   else
     printf("\n both are equal");
}