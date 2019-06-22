#include <stdio.h>

int
main(void)
{
    int weatherIsGood = 0; // It's cloudy!!

    if(weatherIsGood)
    {
        printf("The weather is good!\n");
        printf("That's great, I can go outside!\n");
    }
    else
    {
        printf("The weather is bad!\n");
        printf("Too bad, I have to stay home!\n");
    }
    return 0;
}
