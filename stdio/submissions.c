#include <stdio.h>

int
main(void)
{
    printf ("This was code with errors: ");
    printf ("I Fixed them!");

    printf("I already know how to:\n- Print text to the screen.\n-\
     Start a new line.\n- Fix errors.");

    printf("*****\n**|**\n*|.|*\n|...|\n.....");

    printf("Dennis Ritchie said:\n\"The only way to learn a new programming\
     language is by writing programs in it.\"");

    int number_robots = 0, weight = 0, height = 0, enginePower = 0, resistance = 0, sum = 0, i = 0;
    
    scanf("%d",&number_robots);
    
    for(i = 0; i < number_robots; i++)
    {
        scanf("%d%d%d%d", &height, &weight, &enginePower, &resistance);
        sum += (enginePower + resistance) * (weight - height);
    }
    
    printf("%d\n", sum);

        
    return 0;
}

