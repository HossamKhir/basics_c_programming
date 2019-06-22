#include <stdio.h>

int
main(void)
{
    //variable declaration
    int nbThrows = 0, nbDice = 0, diceValue = 0, throwSum = 0, throw = 0, dice = 0;

    //reading input
    scanf("%d %d", &nbThrows, &nbDice);
    
    //calculate the winner
    for(throw = 0; throw<nbThrows; throw++)
    {
        for(dice = 0; dice<nbDice; dice++)
	{
            scanf("%d", &diceValue);
            throwSum = throwSum + diceValue;
        }
        printf("throw %d sum equals %d\n", throw, throwSum);
        throwSum = 0;
    }

    //return statement
    return 0;
}