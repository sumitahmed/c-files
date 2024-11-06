#include<stdio.h>
#include<string.h> // Include string.h for strcmp function

struct census
{
    char city[20];
    long population;
    float literacy;
};

int main()
{
    int i, j;
    struct census temp; // Declare a temporary variable of type struct census for swapping
    struct census people[5];

    // Input data
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter city name: ");
        scanf("%s", people[i].city);
        printf("Enter population: ");
        scanf("%ld", &people[i].population);
        printf("Enter literacy level: ");
        scanf("%f", &people[i].literacy);    
    }

    // Sorting the array by city names using Bubble Sort algorithm
    for(i = 0; i < 5 - 1; i++)
    {
        for(j = 0; j < 5 - i - 1; j++)
        {
            if(strcmp(people[j].city, people[j + 1].city) > 0)
            {
                // Swap struct elements
                temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
            }
        }
    }

    // Output sorted data
    printf("\nSorted Data:\n");
    for(i = 0; i < 5; i++)
    {
        printf("\nCity name: %s", people[i].city);
        printf("\nPopulation: %ld", people[i].population);
        printf("\nLiteracy level: %.2f\n", people[i].literacy);    
    }  

    return 0;
}
