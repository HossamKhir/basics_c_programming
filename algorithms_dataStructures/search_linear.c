#include <stdio.h>

int
main(void)
{
    //declare variables
    int list[] = {6, -2, 5, 12, 7, 3, 8, 18, -10, 1};
    int n = 10, item = 0, i = 0, found = 0;
    
    //read the number to search for
    printf("Which number are you looking for? ");
    scanf("%d", &item);

    while (i < n)
    {
        if (item == list[i++])
	{ 
            printf("I found %d at index %d in the list. \n", item, --i);
	    return 0;
        }
    }

    //the code reaches here only when the item is not found    
    printf("%d is not a member of this list. \n", item);
    return 0;
}
