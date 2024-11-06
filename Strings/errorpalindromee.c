#include <stdio.h>
#include <string.h>
void main()
{
char st[50], rev[50];
int i,l=0,j=0;
printf("\n enter any word:");
scanf("[^\n] st");
l= strlen(st);
for(i=l-1;i>=0;i--)
rev[j++]=st[i];
printf("\n reverse word =%s",rev);
if(strcmp(rev,st)==0)
printf("it is a palindrome");
else
printf("\n no");
}