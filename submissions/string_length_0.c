//problem statement
/*
    Your job is to find the length of the longest word in a text with no punctuation or special characters of any kind - only contains words.
    To do so,
    please write a C-program that takes as a input first the number of words in a text,
    followed by all of the words in the text.
    The output of your program should be the length of the longest word in the text.

    To simplify your program,
    you can assume that the longest word will not exceed 100 characters.
*/

#include <stdio.h>

int
main(void)
{
    //declare variables (not wars)
    int i = 0, max = 0, words = 0, j = 0;
    char word[100];
    
    //read input
    scanf("%d", &words);
    
    //read sentence & find the longest word's length
    for(i = 0; i < words; i++)
    {
        scanf("%s", word);
        while(word[j++] != '\0'){}
        if (--j > max)
        {
            max = j;
        }
    }
    
    //print the result
    printf("%d", max);
    
    //return statement
    return 0;
}