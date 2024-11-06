
//wap which will read a text and count all the occurance of a particular word
#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{
    char n[80], search[30],ch,wd[30];
    int i,l,j=0,c=0;
    printf("Enter the sentence");
    scanf("%s",n);
    printf("\n enter the word");
    scanf("%s",search);
    l=strlen(n);
    for(i=0;i<l;i++)
    {
        j=0;
       ch=n[i];
       if(n[i]!=' ')
         wd[j++]=ch;
       else 
          {
          wd[j]='\0';  
          if(strcmp(wd,search))
           c++;
          }
    }
     printf("count= %d",c);
     return 0;

}