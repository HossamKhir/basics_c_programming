//problem statement
/*
    You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word (including the middle letter if there is one).
    Specifically,
    if the first half of the word does contain a 't' or a 'T',
    your program should output a 1.
    If the first half does not contain the letter 't' or 'T',
    but the second half does, then your program should output a 2.
    Otherwise,
    if there is no 't' or 'T' in the word at all,
    your program's output should be -1.
    You may assume that the word entered does not have more than 50 letters.
*/

#include <stdio.h>
#include <math.h>

int
main(void)
{
    //declare variables (not wars)
    int length = 0, found = 0, index = 0;
    char word[50];
    
    //read input word
    scanf("%s", word);
    
    //find the index of [T||t] & the length of word
    while(word[length] != '\0')
    {
        if(index == 0 && (word[length] == 't' || word[length] == 'T'))
        {
            index = length;
            found++;
        }
        length++;
    }
    
    //check your findings
    if (found)
    {
        if (index < ceil(length/2.0))
        {
            found = 1;
        }
        else
        {
            found = 2;
        }
    }
    else
    {
        found = -1;
    }
    
    //print the result
    printf("%d", found);
    
    //return statement
    return 0;
}