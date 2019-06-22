#include <stdio.h>

int
main(void)
{
    //variable declaration
    int diceValue = 0;

    //check condition
    while (diceValue != 6)
    {
        scanf("%d", &diceValue);
    }

    //print output
    printf("Found it!\n");
    //**************************
    //declare variables
    int day = 0, newSignatures = 3, totalSignatures = 3;

    //check
    while (totalSignatures < 1000)
    {
        day++;
        newSignatures = 2*newSignatures;
        printf("Day %d: %d new signatures! ", day, newSignatures);
        totalSignatures = totalSignatures + newSignatures;
        printf("Total: %d\n", totalSignatures);
    }

    //return statement
    return 0;
}
