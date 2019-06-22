//problem statement
/*
    You are still conducting linguistic research! This time,
    you'd like to write a program to find out how many letters occur multiple times in a given word.
    Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes).
    Next,
    your program should iterate through the letters of the word and compare each letter with the one following it.
    If these equal each other,
    you increase a counter by 1,
    making sure to then skip ahead far enough so that letters that occur more than twice are not counted again.
    You may assume that the word you read from the input has no more than 50 letters,
    and that the word is all lowercase.
*/

#include <stdio.h>
#include <string.h>

int
main(void)
{
    //declare variables (not wars)
    int i = 0, j = 0, counter = 0, length = 0;
    char word[51], temp = '\0';
    
    //read input
    scanf("%s", word);
    
    //get the length of the word
    length = strlen(word);
    
    //sort the list
    for (i = 0; i < length - 1; i++)
    {
        for (j = 0; j < length - i - 1; j++)
        {
            if (word[j] > word[j+1])
            {
                temp = word[j];
                word[j] = word[j+1];
                word[j+1] = temp;
            }
        }
    }
    
    //find number of repetition
    i = 0;
    while (i < length - 1)
    {
        if (word[i] == word[i+1])
        {
            counter++;
            temp = word[++i];
            while ((word[i+1] != '\0') && (word[i+1] == temp))
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    
    //print the result
    printf("%d", counter);
    
    //return statement
    return 0;
}