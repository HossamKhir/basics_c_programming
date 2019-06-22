//problem statement
/*
    We would like you to develop a program capable of making a child play automatically the game of "more or less".
    The child must try to guess a secret number.
    The program should respond to each guess with "it is more" or "it is less" until the child finds the right number.

    Your program must first read an integer indicating the number that the child will have to find during the game.
    Next the program should repeatedly read the player's guesses and display the text "it is more" if the child has submitted a smaller number or "it is less" if they have submitted a larger number.
    Once the correct number is reached,
    the program should print "Number of tries needed:" followed by a new line and the integer number of tries that it took the guesser.
*/
#include <stdio.h>

//global variables
const char more[] = "it is more\n", less[] = "it is less\n", tries[] = "Number of tries needed:\n";

int
main(void)
{
    //declare variables (not wars)
    unsigned int target = 0, guess = 0, trial = 1;
    
    //read the target
    scanf("%d", &target);
    
    //check the guesses
    scanf("%d", &guess);
    while (guess != target)
    {
        if(guess > target)
        {
            printf("%s", less);
        }
        else
        {
            printf("%s", more);
        }
        trial++;
        scanf("%d", &guess);
    }
    
    //end game
    printf("%s%d", tries, trial);
    
    
    //return statement
    return 0;
}