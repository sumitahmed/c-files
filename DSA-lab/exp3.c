#include <stdio.h>
int main(){
     int a[10],i,n;
     int largest,smallest;
     
     printf("\nEnter the size of array(list):");
     scanf("%d",&n);
     
     printf("\nEnter the list of integers to be stored:");
     for(i=0;i<n;i++){
     scanf("%d",&a[i]);
     }
     
     largest = smallest =a[0];
     
     for(i=0;i<n;i++)
     if(a[i]>largest)
     {
         largest = a[i];
     }
     
     if(a[i]<smallest)
     {
       smallest = a[i];
     }
     
     printf("the largest number is %d:", largest);
     printf("the smallest number is %d:", smallest);
     return 0;
}