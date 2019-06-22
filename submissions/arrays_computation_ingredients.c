//program statement
/*
You plan to make a delicious meal and want to take the money you need to buy the ingredients.
Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need.
The program should read in the number of ingredients (up to a maximum of 10 ingredients),
then for each ingredient the price per pound.
Finally your program should read the weight necessary for the recipe (for each ingredient in the same order).
Your program should calculate the total cost of these purchases,
then display it with 6 decimal places.
*/

#include <stdio.h>

int
main(void)
{
    //declare variables (not wars)
    int ingredients_number = 0, i = 0;
    
    //read input
    scanf("%d", &ingredients_number);
    
    //declare arrays
    double price_per_pound[ingredients_number], pounds[ingredients_number], cost = 0;
    
    //read price / pound
    for (i = 0; i < ingredients_number; i++)
    {
        scanf("%lf", &price_per_pound[i]);
    }
    
    //read weights
    for (i = 0; i < ingredients_number; i++)
    {
        scanf("%lf", &pounds[i]);
    }
    
    //calculate cost
    for(i = 0; i < ingredients_number; i++)
    {
        cost += (price_per_pound[i] * pounds[i]);
    }
    
    //print the result
    printf("%.6lf", cost);
    
    //return statement
    return 0;
}
