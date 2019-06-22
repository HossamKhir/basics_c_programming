#include <stdio.h>

int
main(void)
{
    int array[3]; //declare space to hold 3 integers
    
    //fill the array elements
    array[0] = 18;
    array[1] = 137;
    array[2] = 8;
    
    //print the array elements
    printf("First element is %d.\n", array[0]);
    printf("Second element is %d.\n", array[1]);
    printf("Third element is %d.\n", array[2]);

	//***********************************************
    int readValue = 0, i = 0;
    //declaring an array, a variable as a buffer, and another as a counter
    
    //read and store elements
    for(i = 0 ; i < 3 ; i++)
    {
        printf("Enter a value:");
        scanf("%d", &readValue);
        array[i] = readValue;
        printf("Cell number %d contains %d\n", i+1, array[1]);
    }
	//********************************************************
	//declare variables & arrays
    int ages[10], i = 0, ageMax = 0;
    
    //loop to read & compare the ages
    for (i=0; i<10; i++)
    {
        scanf("%d", &ages[i]);
        if (ages[i] > ageMax)
        {
            ageMax = ages[i];
        }
    }
    
    //print the result
    printf("The maximum age is %d.\n", ageMax);

	//print the differences
	printf("Age differences with the eldest person:\n");
    for(i=0;i<10;i++)
    {
        printf("%d:%d ", ages[i],ageMax-ages[i]);
    }
    
    //return statement
    return 0;
}
