#include <stdio.h>

int
main(void)
{
    double height = 1.74;
    
    //%.<precision>lf to print a double with a
    //specific <precision>
    printf("I am %.2lf meters tall.",height);
    
    //ask the user to input his height in meters
    printf("How tall are you (in meters)? ");
    
    //read the user input
    scanf("%lf", &height);
    
    //print the user's height
    printf("I am %.2lf meters tall.", height);
    
    
    return 0;
}
