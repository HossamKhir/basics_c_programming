#include <stdio.h>

int
main(void)
{
	//declare variables
    int sunny = 1, vacation = 1;
    
    //do logic operation AND
    int sunAndVacation = sunny && vacation;
    
    //truth table for AND
    // 1 && 1 : 1,  1 && 0 : 0, 0 && 1 : 0, 0 && 0 : 0
    
    //test logic
    if (sunAndVacation) 
    {
        printf("Yeah!!\n");
    }
    else 
    {
        printf("Too bad!\n");
    }
    
    //do logic operation OR
    int sunORvacation = sunny || vacation;
    
    //truth table for OR
    //1||1:1 1||0:1 0||1:1 0||0:0
    
    //test logic
    if(sunORvacation)
    {
        printf("Going well: it is sunny OR I am on vacation OR both!\n");
    }
    else
    {
        printf("Not going well: it is NEITHER sunny NOR am I on vacation!\n");
    }
    
    //logic operation NOT
    int NOTsunny = !sunny, NOTvacation = !vacation;
    
    //note that NOT can be used in line with other logic operators (AND & OR)
    
    //complex logic operations
    //declare variable
    int age;
    
    //ask for information
    printf("What is your age?\n");
    
    //read input
    scanf("%d",&age);
    
    //check input & determine output
    if(age >= 18 && !(age >= 65))
    {
        printf("You are in the labor force\n");
    }
    else
    {
        printf("You are not in the labor force\n");
    }
    
    //return statement
    return 0;
}

