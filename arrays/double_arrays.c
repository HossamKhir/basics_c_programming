#include <stdio.h>

int
main(void)
{
	//declare an array of doubles, and a double variable
    double array[3], readValue = 0.0;
    //declare an integer counter
    int i = 0;
    
    //read & store inputs
    for(i=0;i<3;i++)
    {
        printf("Enter a decimal value:");
        scanf("%lf",&readValue);
        array[i] = readValue;
        printf("Cell number %d contains %.2lf\n", i, array[i]);
    }
    
    //return statement
    return 0;
}
