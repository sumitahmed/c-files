// Wap to take input of an integer 
// Array
// Then print 2nd largest element of the array
// Without using any sorting
#include <stdio.h>
int main()
{
int n,max,smax,i;
printf("\n enter the array size:");
scanf("%d", &n);
int a[n];

printf("\nEnter the list of integers to be stored:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

max=INT_MIN;
smax=max;


for(i=1;i<n;i++)
{
if(a[i]>l)
{
l = a[i];
}
if(a[i]<s)
{
s = a[i];
}
}
printf("the largest number is %d:", l);
printf("the smallest number is %d:", s);
return 0;
}