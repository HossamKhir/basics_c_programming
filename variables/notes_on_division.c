#include <stdio.h>

int
main(void)
{
    // integer division
    printf("5/2 equals %d\n", 5/2);

    // floating point division
    printf("5.0/2.0 equals %lf\n", 5.0/2.0);

    printf("5/2.0 equals %lf\n", 5/2.0);

    printf("5.0/2 equals %lf\n", 5.0/2);

	//note: on using the wrong specifier there
	//is a warning, e.g. using %d with double
	//or %lf with int
	
	//"%d", 5.0/2	=> warning
	//"%.2lf", 5/2	=> warning
	
	//****************************************
	//remainder of division
	// pay 166 dollars using 20-dollar bills, rest with 1-dollar bills
	//declare initialized variables
    int twenties = 166/20, rest = 166%20;
    
    //print the results
    printf("I will pay %d dollars with 20-dollar bills.\n", twenties * 20);
    printf("I will then pay %d dollars with 1-dollar bills.\n", rest);

    return 0;
}
