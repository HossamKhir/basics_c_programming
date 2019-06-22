//problem statement
/*
    Write a C-program that prints out a word as many times as specified.
    The number of repetitions and the word should be given as input to the program.
    You may assume that the word has no more than 100 characters (be sure to also reserve space for the null terminator, \0, though!).
*/

#include <stdio.h>

int
main(void)
{
    //declare variables (not wars)
    int repeat = 0, i = 0;
    char word[101];
    
    //read input
    scanf("%d %s", &repeat, word);
    
    //repeat the word
    for(i = 0; i < repeat; i++)
    {
        printf("%s\n", word);    
    }
    
    //return statement
    return 0;
}