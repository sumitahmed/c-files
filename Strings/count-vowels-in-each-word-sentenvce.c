//count-vowels-in-each-word-of-a-sentenvce
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[40],wd[30],c;
    int cv=0,i=0,j=0,v,k;
    printf("Enter a sentence: ");
    do
    {
       c=getchar();
       sentence[i]=c;
       i++;
    } while(c!='\n');
    i--;
    sentence[i++]=' ';
    sentence[i]='\0';
    printf("\n\n %s",sentence);
    for ( i = 0; sentence[i] != '\0'; i++) {
        if(sentence[i]!=' ')
          wd[j++]=sentence[i];
        else{
        wd[j]='\0';
        printf("\n %s",wd);
        for(k=0;wd[k ]!='\0';k++) 
        {
        if (wd[k] == 'a' || wd[k] == 'e' || wd[k] == 'i' || wd[k] == 'o' ||wd[k] == 'u') 
            cv++;
        }
        printf("\n\n %d",cv," \n %s",wd);
        j=0;
        cv=0;
        }
       }
    
    return 0;
}
