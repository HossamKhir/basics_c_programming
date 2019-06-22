#include <stdio.h>

double fahr(double cel);

int
main(void)
{
    int i = 0, m = 8;
    
    //integer submissions
    //print the multiplication table for 8
    for(i = 0; i <= 10; i++)
    {
        printf("%dx%d = %d\n", i, m, i*m);
    }

	//read the number from user
	scanf("%d", &m);
    
    //print the multiplication table for
    //the number read from user
    for(i = 0; i <= 10; i++)
    {
        printf("%dx%d = %d\n", i, m, i*m);
    }
	//************************************
	//character submissions
    char letter1 = 'i', letter2 = 'n', letter3 ='C';
	
	//print some characters    
    printf ("Programming %c%c %c\n", letter1, letter2, letter3);
    
    //a programme to print this pattern
    /*
    ++++c++++
    +++ccc+++
    ++ccccc++
    +ccccccc+
    ccccccccc
    */
    //variables declarations
    char input;
    int i = 0, j = 0;
    
    //algorithm beginning
    //read the character
    scanf("%c", &input);
    
    //start printing
    for(i = 0; i <= 4; i++)
    {
    	//print the first portion of the line pattern
        for(j = 0; j <= 3 - i; j++)
        {
            printf("+");
        }
        
        //print the second portion of the line pattern
        for(j = 0; j < (i * 2) + 1; j++)
        {
            printf("%c", input);
        }
        
        //print the last portion of the line pattern
        for(j = 0; j <= 3 - i; j++)
        {
            printf("+");
        }
        
        //insert a new line
        printf("\n");
    }
    //***********************************************
    //double submissions
	//a programme to convert from kilometers to miles
	//declare variable
	double kilometers = 0;
    
    //read input
    scanf("%lf", &kilometers);
    
    //print output
    printf("%.6lf", 0.621371 * kilometers);

	//a programme to convert celsius to fahrenheit
	//declare variable (not war)
    double celsius = 0;
    
    //read input
    scanf("%lf", &celsius);
    
    //print output
    printf("%.1lf", fahr(celsius));
    //********************************************
    //division submission
    /*calculate number of boxes filled completely
    with matches & number of remaining matches*/
    //declare variables (not wars)
    int matches = 0, box_size = 0;
    
    //read input
    scanf("%d%d", &matches, &box_size);
    
    //display output
    printf("%d\n%d", matches/box_size, matches%box_size);
    	
	return 0;
}

double fahr(double cel)
{
    return (( 9.0 / 5.0 ) * cel) + 32;
}
