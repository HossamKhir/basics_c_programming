#include <stdio.h>

int
main(void)
{
    char letter;//DECLARE A CHARACTER VARIABLE

    letter = 'a';//DEFINE or INITIALIZE or ASSIGN a character value

    printf("The letter is %c",letter);
    
    char letter2;

    printf("Please enter two letters separated by a comma: ");

    scanf("%c,%c", &letter, &letter2);
    //this is to read characters separated by a comma
    //it can be [%c %c] for space separation
    //it can be [%c%c] for no separation at all

    printf("I read the letters %c and %c.\n", letter, letter2);

    return 0;
}
