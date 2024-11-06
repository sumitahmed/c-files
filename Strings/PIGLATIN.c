#include <stdio.h>
#include <string.h>
void main()
{
char st[50], sub[20],pig[50];
int i,l=0,j=0,k=0;
printf("\n enter any word:");
scanf("%s",st);
l= strlen(st);
for(i=0;i<l;i++)
{
    if( st[i]=='a' || st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
     break;
     else
      pig[j++]=st[i]; 
}
pig[j]='\0';
for(k=i;k<l;k++)
 sub[j++]=st[k];
sub[j]='\0'; 
strcat(sub,pig);
strcat(sub,"ay");
puts(sub);
}

