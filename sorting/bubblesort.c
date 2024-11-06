#include <stdio.h>
int main()
{
    int i,n,j,temp,A[n];
    
    for(i=0;i<n-1;i++)
    flag=0;
    {
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j++])
            {
                temp = A[j];
                A[j]=A[j+];
                A[j+1]=temp;
                flag=1;
            }
        } if flag==0;
        break
    }


    return 0;
}