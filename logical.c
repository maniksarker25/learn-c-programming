/*
learn about logical operators
logical and &&
logical or ||
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{

    // and operator
    bool result = (3 < 5) && (4 < 5);
    // both are true that's why this expression is true

    printf("The result is %d\n", result);

    bool result2 = (3 > 5) && (3 < 44);
    // both are not true that's why this expression is false
    printf("The result2 is %d\n", result2);

    // for or operator
    bool result3 = (3 > 5) || (4 > 5) || (4>1);
    //              false      false     true   , the one is true that's why this expression is true
    printf("The result3 is %d\n", result3);
    return 0;
}
