#include<stdio.h>
struct census
{
    char city[20];
    long population;
    float literacy;
};
int main()
{
    int i,j;
    char *temp[10];
    struct census people[5];
    for(i=0;i<5;i++)
    {
      printf("\n enter city name");
      scanf("%s",people[i].city);
      fflush(stdin);
      printf("\n enter population");
      scanf("%ld", &people[i].population);
      fflush(stdin);
      printf("\n enter literacy level");
      scanf("%f",&people[i].literacy);    
    }
    for(int i=0;i<9;i++)
    {
        for(j=0;j<10;j++)
         {
            if(strcmp(people[j].city,people[j+1].city)>0)
             {
                temp=people[j].city;
                people[j].city=people[j+1].city;
                people[j+1].city=temp;
             }
         }
     }
     for(i=0;i<5;i++)
    {
      printf("\n city name");
      scanf("%s",people[i].city);
      fflush(stdin);
      printf("\n population");
      scanf("%ld", people[i].population);
      fflush(stdin);
      printf("\n literacy level");
      scanf("%f",people[i].literacy);    
    }  
     
    return 0;

}