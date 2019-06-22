#include <stdio.h>

int
main(void)
{
    int age;//DECLARE
    
    printf("What is your age ?\n");	//ask the user about his/her age
    
    scanf("%d",&age);	//read the user input
    
    printf("You are %d years old\n", age);//USE
    
    int first, second, third;	//variables to store input
    
    printf("Please enter three integers, separated by commas: ");
    
    scanf("%d,%d,%d", &first, &second, &third);
    
    printf("You entered: %d for first, %d for second, %d for third.\n", first, second, third);

	printf("Please enter three integers:\n");
    
    scanf("%d%d%d", &first, &second, &third);
    
    printf("You entered: %d for first, %d for second, %d for third.\n", first, second, third);

	int howMany = 0, sum = 0, numberRead = 0;
	
    printf("How many items do you want to add?\n");
    
    scanf("%d",&howMany);
    
    for(int i = 0; i < howMany; i++)
    {
        scanf("%d",&numberRead);
        printf("I have read %d from the input terminal\n",numberRead);
        sum = sum + numberRead;
        printf("sum equals %d\n",sum);
    }

    return 0;
}
