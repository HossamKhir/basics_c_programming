#include <stdio.h>

int
main (void)
{
    //declare variables (not wars)
    int number_grades = 0, sum = 0, i = 0, grade = 0;
    
    //read input
    scanf("%d", &number_grades);
    for(i = 0; i < number_grades; i++)
    {
        scanf("%d", &grade);
        sum+=grade;
    }
    
    //print average
    printf("%.2lf", ((double)sum/number_grades));
    //*******************************************
    //declare variables (not wars)
    unsigned int pop = 0;
    double perc = 0;
    
    //read input
    scanf("%d %lf", &pop, &perc);
    
    //display output
    printf("%d", (int)(pop * (1 + (perc/100))));
    
    //******************************************
    //declare variables (not wars)
    double money = 0, price_book = 0;
    
    //read input
    scanf("%lf %lf", &money, &price_book);
    
    //display output
    printf("%d", (int)(money/price_book));
    //******************************************
    //declare variables (not wars)
    double pounds_cement = 0;
    
    //read input
    scanf("%lf", &pounds_cement);
    
    //print the output
    printf("%d", cost * ((int)(1 + pounds_cement/cement_bag)));

    return 0;
}
