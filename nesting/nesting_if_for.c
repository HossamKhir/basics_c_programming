#include <stdio.h>

int
main(void) 
{
    //variable declaration
    int target, i;

    //prompt the user to input
    printf("Please enter a target number: ");
   
    //read the input
    scanf("%d", &target);

    //start the algorithm
    if (target >= 0) 
    {
        for (i=1; i<target; i+=2) 
        {
	    printf("%d ", i);
        }
    } 
    else 
    {
        printf("Nothing to do!\n");
    }

    //return statment
    return 0;
}
