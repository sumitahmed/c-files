#include <stdio.h>

 int main( int argc, char *argv[])
     {
    FILE *fp;
    int i;
    char word[15];

    fp = fopen(argv[1], "w");
    printf("\n No. of arguments in command line = %d \n\n", argc);
    for(i=2;i<argc;i++)
     fprintf(fp,"%s",argv[i]);
  fclose(fp);
    
printf("contents of %s file\n\n", argv[1]);
fp= fopen(argv[10], "r");
for (i=2;i<argc;i++)
{
    fscanf(fp,"%s",word);
    printf("%s", word);
}
fclose(fp);
printf("\n\n");

for(i=0;i<argc;i++)
  printf("%*s \n", i*5,argv[i]);
 return 0;
}