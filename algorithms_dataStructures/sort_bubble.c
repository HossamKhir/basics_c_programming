#include<stdio.h>

int
main(void)
{
    // Sorting descendingly
    int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5};	// unsorted list
    int n = 10, i = 0, j = 0, swap = 0;
    
    printf("Unsorted list: \n");
    for (i=0; i<n; i++)
    {
        printf("%d ", list[i]);
    }
    
    for (j=0; j<n-1; j++)
    {
        for (i=0; i<n-1; i++)
	{
            if (list[i] < list[i+1])
	    {
                swap = list[i];
                list[i] = list[i+1];
                list[i+1] = swap;
            }
        }
    }
    
    printf("\nSorted list: \n");
    for (i=0; i<n; i++)
    {
        printf("%d ", list[i]);
    }

    return 0;
}
