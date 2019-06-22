//problem statement
/*
    You want to determine the number of cities in a given region that have a population strictly greater than 10,000.
    To do this,
    you write a program that first reads the number of cities in a region as an integer,
    and then the populations for each city one by one (also integers).
*/

#include <stdio.h>

int
main(void)
{
    //variable declaration
    int cities = 0, i = 0, sum = 0;
    
    //read input
    scanf("%d", &cities);
    
    //declare an array
    int population[cities];
    
    //read input
    for(i = 0; i < cities; i++)
    {
        scanf("%d", &population[i]);
    }
    
    //check population
    for(i = 0; i < cities; i++)
    {
        if(population[i] > 10000)
        {
            sum++;
        }
    }
    
    //print the result
    printf("%d", sum);
    
    //return statement
    return 0;
}