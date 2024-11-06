#include<stdio.h>
#include<string.h>
void main()
{
      char sen[80],ss[20];
      int l,i,j=0;
      printf("\n enter a sentence");
      scanf("%[^\n]",sen);
      ss[j++]=sen[0];
      for(int i=0;i<strlen(sen);i++)
       {
        if(sen[i]==' ')
        {
         ss[j++]='.'; 
         ss[j++]=sen[i+1];
        }
       }
       ss[j]='\0';
       printf("\n %s",ss);
}