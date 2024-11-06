#include<stdio.h>
#include<string.h>
void main()
{
    char st[30],rev[30];
    int i,l=0,j=0;
    printf("\n enter any word");
    gets(st);
    l=strlen(st);
    for(i=l-1;i>=0;i--)
     rev[j++]=st[i];
   rev[j]='\0'; 
   printf("\n reverse word= %s",rev);
   if(strcmp(rev,st)==0)
    printf("\n it is a pallindrome word");
  else
    printf("\n it is not pallindrome");  
}