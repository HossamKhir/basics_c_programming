#include <stdio.h>

int
main(void)
{
    //declare variables
    char word[30]; //arrray of 29 characters (string) [word of 28 letters, 1 for null terminator]

    //prompt the user for input
    printf("Please enter a word with 50 letters: ");

    //read input
    scanf("%s", word);	//notice that there is no '&' before the variable

    //display input
    printf("The word read is: %s.\n", word);
    printf("The characters are: <%c> <%c> <%c> <%c>\n", word[0], word[1], word[2], word[3]);

    //manipulate input
    word[1] = 'a';
    printf("The new word is %s\n", word);
    //***************************************************************************************
    //declare variables
    int i = 0;

    //prompt the user for input
    printf("Please enter a word: ");

    //read input
    scanf("%s", word);

    //calculate length of word
    while (word[i++]!='\0') {}

    //print the result
    printf("%s has word length %d.\n", word, --i);

    //********************************************
    //declare variables
    char word1[50];
    char word2[50];
    
    //prombt the user for input & read it
    printf("Please enter a word: ");
    scanf("%s", word1);

    printf("And another: ");
    scanf("%s", word2);

    // Find first letter in which words differ
    while (word1[i]!='\0' && word2[i]!= '\0' && word1[i] == word2[i]) 
    {
        i++;
    }
    if (word1[i] < word2[i])
    {
        printf("%s comes before %s in the alphabet.\n", word1, word2);
    }
    else if (word1[i]>word2[i])
    {
        printf("%s comes after %s in the alphabet.\n", word1, word2);
    }
    else 
    {
	printf("You entered the same word, %s, twice.\n", word1);
    }
        
    //return statement
    return 0;
}
