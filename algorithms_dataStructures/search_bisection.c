#include<stdio.h>
int
main(void)
{
    //declare variables
    int list[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900}; //must be a sorted list
    int n = 10, item = 0, found = 0;
    int  ia = 0, ib = n-1, mid = 0;

    //ask the user for input & read it
    printf("Which number are you looking for? ");
    scanf("%d", &item);

    //bisection search starts
    while (!found && (ia <= ib))	//should the indeces overlap, that means item does not exist
    {
        mid = (ia + ib)/2; // middle index
        if (item == list[mid])
	{
            found = 1;  // found item!
        }
	else if (item<list[mid])
	{
            ib = mid-1; // toss the top half
        }
	else
	{
            ia = mid + 1; // toss the bottom half
        }
    }
    
    if (!found) {
        printf("Number %d was not found in the array. \n", item);
    } else {
        printf("Number %d was found at index %d in the array.\n", item, mid);
    }
    
	return 0;
}