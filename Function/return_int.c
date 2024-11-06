#include <stdio.h>
char * month(int);
void main()
{
    int m;
    char *p;
    printf(" enter any number between 1 to 12");
    scanf("%d",&m);
    p=month(m);
    printf("%s",p);
}
char * month(int mn)
{
    char *pt;
    switch(mn)
    {
        case 1: pt="January";
                break;
        case 2: pt="February";
                break;  
        case 3: pt="March";
                break;  
        case 4: pt="April";
                break;   
        case 5: pt="May";
                break;  
        default: pt="NONE";
                                     
    }
    
    return pt;
}