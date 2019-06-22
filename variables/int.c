#include <stdio.h>

int
main(void)
{
    //Declare a variable to store an integer value
    int age;

    //Assign a value to that variable
    age = 47;
    
    printf("I am %d years old.\n", age);
    printf("In %d years, I will be %d years old.\n", 8, age+8);
    printf("%d years ago, I was %d years old.\n", 11, age-11);
    
    int balance = 50;	//declaring a variable & initializing it
    
    printf("I have %d dollars in my account\n",balance);
    
    //expense of 40 dollars
    balance = balance - 40;
    printf("I have %d dollars in my account\n",balance);
    
    //add 20 dollars in my account
    balance = balance + 20;
    printf("I have %d dollars in my account\n",balance);
    
    //expense of 30 dollars
    balance = balance - 30;
    printf("I have %d dollar in my account\n",balance);
    
    int numberOfHazelnuts = 0, distanceTraveled = 0;
    //declaring 2 variables, one for counting the hazelnuts, the other for the miles traveled
    
    int i = 0;	//declaring a counter variable
    
    for(i = 0; i < 9; i++)
    {
    	printf("At %d miles I have %d hazelnuts.\n", distanceTraveled++, numberOfHazelnuts);
    	numberOfHazelnuts+=3;
    }
    
    return 0;
}
