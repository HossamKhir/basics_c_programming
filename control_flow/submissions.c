#include <stdio.h>

int
main(void)
{
    int x = 0;
    
    for( x=0; x<3; x++)
    {
        printf("C is fun!\n");
    }
    //************************

    for( x=0; x<=2; x++)
    {
        printf("C is fun!\n");
    }
    
    printf("\n");
        for( x=0; x<=4; x++)
    {
        printf("\nWe can do everything with it!");
    }
    //********************************************
    
    printf("+");

    for (i = 0; i < 23; i++)
        printf("-");

    printf("+\n");
    //**********************
    
    for (i = 0; i < 3; i++)
    {
        printf("| o | X | o | X | o | X |");
        printf("\n");
        printf("| X | o | X | o | X | o |");
        printf("\n");
    }
    //**************************************
    //comparisons
    //declare variables (not wars)
    unsigned int passengers = 0;
    double gas = 0, payment = 0;
    
    //read input
    scanf("%d %lf", &passengers, &gas);
    
    //checking input
    if(passengers)
    {
        payment = (gas+1) / (passengers+1);
    }
    else
    {
        payment = gas;
    }
    
    //print output
    printf("%.2lf", payment);
    //*************************************
    //declare variables (not wars)
    unsigned int arrival = 0, payment;
    
    //read input
    scanf("%d", &arrival);
    
    //algorithm start
    payment = 10 + (5 * arrival);
    
    //comparison
    if(payment > 53)
    {
        payment = 53;
    }
    
    //print output
    printf("%d", payment);
    //*******************************
    //declare variables (not wars)
    unsigned int dice[2] = {0, 0};
    
    //read input
    scanf("%d %d", &dice[0], &dice[1]);
    
    //algorithm begining
    if ((dice[0] + dice[1] >= 10))
    {
        printf("Special tax\n36");
    }
    else
    {
        printf("Regular tax\n%d", 2*(dice[0] + dice[1]));
    }
    
    //***************************************************
    //declare variables (not wars)
    unsigned int players = 0, i = 0, sum[2] = {0, 0}, temp = 0;
    
    //read first input
    scanf("%d", &players);
    
    //declare another variable
    unsigned int weights[players];
    
    //read the following inputs
    for(i = 0; i < players; i++)
    {
        scanf("%d", &temp); //read weight for team 1 player
        sum[0] += temp;     //increment the sum with the weight read
        scanf("%d", &temp); //read weight for team 2 player
        sum[1] += temp;     //increment the sum with the weight read
    }
    
    //print output
    printf("Team %d has an advantage\n", (sum[0] > sum[1]) ? 1 : 2);
    printf("%s1: %d\n%s2: %d", phrase, sum[0], phrase, sum[1]);
    
    //**************************************************************
    //logic operations
    //declare variables (not wars)
    unsigned int age = 0, luggage = 0, cost = 0;
    
    //read input
    scanf("%d %d", &age, &luggage);
    
    //do the math
    if ((age >= 10) && (age != 60))
    {
        cost = 30 + ((luggage > 20)? 10:0);
        //the initial cost is 30, and if the luggage exceeds 20 pounds, there
        //is an extra 10
    }
    else if (age < 10)
    {
        cost = 5;
    }
    //the last case is the default case, meaning you are 60 and you would pay
    //nothing, which is the initial value of the variable
    
    //display output
    printf("%d", cost);

	//************************************************************************
	//declare variables (not wars)
    int height = 0, leaf = 0;
    
    //read input
    scanf("%d %d", &height, &leaf);
    
    //perform the algorithm
    if (height <= 5 && leaf >= 8)
    {
        printf("Tinuviel");
    }
    else if (height >= 10 && leaf >= 10)
    {
        printf("Calaelen");
    }
    else if (height <= 8 && leaf <= 5)
    {
        printf("Falarion");
    }
    else if (height >= 12 && leaf <= 7)
    {
        printf("Dorthonion");
    }
    else
    {
        printf("Uncertain");
    }

	
	//return statement
    return 0;
}
