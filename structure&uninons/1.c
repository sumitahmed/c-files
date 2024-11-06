//design a function update that accepts the date stricutre designeed to increment the date by one day and return the new date.
// the folowing rules are apploicable
//1. if the date is the last day in a month month should be incremented
//2.if the last day in december, the year should incremented
//3. there are 29 days in februrary then its should be leaap year
#include<stdio.h>
struct date{
    int day;
  int month;
    int year;
}; 
struct date update (struct date);
int main()
{
    struct date B;
    struct date A= {30,3,2021};
    B=update(A);
    printf("%d ,%d,%d",B.day,B.month,B.year);
}
struct date update(struct date A)
{
    if(A.year%4==0 && A.month==2)
    {
        if(A.day>=1 && A.day <=28)
        A.day+=1;   
     }
else  if( (A.day >=1 && A.day <=30)&&(A.month==1||A.month==3||A.month==5||A.month==7||A.month==10||A.month==12))
    A.day +=1;
 if( (A.day >=1 && A.day <=29)&&(A.month==2||A.month==4||A.month==6||A.month==9||A.month==11) )
   A.day+=1;
else if(A.day ==31)
{
 A.day=1;   
 A.month +=1;
 }
if(A.day==31 && A.month == 12)
{
A.year +=1;
A.day =1;
A.month =1;
}

return A;
}
