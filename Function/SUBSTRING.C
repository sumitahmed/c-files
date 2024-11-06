#include <stdio.h>
#include<string.h>
char * substring(char *,int);
 main()
{
    int n;
    char wd[50], *we;
    printf(" enter the character array \n");
    gets(wd);
    
    printf("enter the no of characters you want to remove\n");
    scanf("%d", &n);

    we= substring(wd,n);
    puts(we);
    
}
char * substring(char *st,int nm)
{
char *w;
int i,j=0;
for(i=nm;i<strlen(st);i++)
  w[j++]=st[i];
w[j]='\0';
puts (w);
return w;
}