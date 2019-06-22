#include <stdio.h>

int
main(void)
{
	//declaring variables (not wars)
    int age;
    double height;
    
    //ask for the user's age
    printf("What is your age?");
    
    //read the user's age
    scanf("%d",&age);
    
    //ask for the user's hegiht
    printf("What is your height?");
    
    //read the user's height
    scanf("%lf",&height);
    
    //for simplification purposes you may use
    //printf("what is your age and height?\n");
    //scanf("%d %lf", &age, &height);
    
    //print the collected information
    printf("You are %d years old and %.2lf meters tall.",age,height);

    return 0;
}
