#include <stdio.h>

int
main(void)
{
	//declare variable for counting
    int i;

	// i++ is short for i = i+1, i-- for i = i - 1
    // i += 5 is short for i = i + 5
    
	//for (initialization statement; termination condition; incrementing statement)
	for (i = 0; i<3; i++)	
    {
        printf("i has the value %d.\n", i);
    }

	//*************************************    
    for(i=0; i<9; i++)
    {
        printf("Hello, world!\n");
    }

	//****************************
    for(i = 0; i < 3; i++)
    {
        printf("Blah");
        printf("Bleh");
        printf("Blih ");
    }
    printf("\n");
    for (i=0; i<6; i++)
    {
        printf("Bloh");
        printf("Bluh ");
    }

    return 0;
}
