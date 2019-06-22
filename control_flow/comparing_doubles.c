#include <stdio.h>

int
main(void)
{
    //comparison among double values
    //this is not a good practice as it requires knowledge of the
    //precision of the double data type
    double a = 5.000000000001;
    double b = 5.000000000000;
    int result;
    printf("Check: Is a == b ?\n");
    result = a == b;
    printf("result is %d\n", result);
    if(result){
        printf("TRUE\n");
    }else{
        printf("FALSE\n");
    }
    return 0;
}