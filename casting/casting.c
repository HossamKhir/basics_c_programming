#include <stdio.h>

int
main(void)
{
    //declare variables
    int num0, num1;
    double numD, dNum;
    
    //ask the user for input integer
    printf("Please enter two integers: ");
    
    //read input
    scanf("%d %d",&num0, &num1);
    
    //casting the first variable into double
    numD = (double) num0;
    
    //print the output
    printf("dOne/iTwo equals %lf\n",dOne/iTwo);

    //ask the user for input double
    printf("Please enter two doubles: ");

    //read input
    scanf("%lf %lf",&numD, &dNum);

    //cast the doubles into integers
    num0 = (int) numD;
    num1 = (int) dNum;

    //print the output
    printf("%d / %d = %d\n", num0, num1, num0/num1);
    
    return 0;
}
