//problem statement
/*
    Create a program that displays on the screen a square of n x n stars,
    with the integer n given as an input.
*/

#include <stdio.h>

int
main(void)
{
    //declare variables (not wars)
    int dimension = 0, i = 0, j = 0;
    
    //read input
    scanf("%d", &dimension);
    
    //display square
    for (i = 0; i < dimension; i++)
    {
        for (j = 0; j < dimension; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    //return statement
    return 0;
}