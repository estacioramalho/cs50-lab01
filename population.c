#include <stdio.h>

int main () {
    int startingPopulation, endingPopulation;

    printf("Enter the starting population size: ");
    scanf("%d", &startingPopulation);
    
    while (startingPopulation < 9 ) {
        printf("%i is below the minimum starting population size. Please enter a value equal or higher than 9: ", startingPopulation);
        scanf("%d", &startingPopulation);
    }
    
    printf("Enter the ending population size: ");
    scanf("%d", &endingPopulation);

    while (endingPopulation < startingPopulation) {
        printf("%i is below the minimum ending population size. Please enter a value equal or higher than %i: ", endingPopulation, startingPopulation);
        scanf("%d", &endingPopulation);
    }

    int populationGrowth = startingPopulation / 3;
    int populationLoss = startingPopulation / 4;
    int yearlyPopulationGrowth = populationGrowth - populationLoss;
    int years = (endingPopulation - startingPopulation) / yearlyPopulationGrowth;


    /*printf("The population growth is: %i\n", populationGrowth);
    printf("The population loss is: %i\n", populationLoss);
    printf("The yearly population growth is: %i\n", yearlyPopulationGrowth);
    printf("The number of years it will take to reach the ending population size is: %i\n", years);*/

    printf("Years: %i\n", years);

    return 0;
}