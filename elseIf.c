#include <stdio.h>
#include <math.h>

int main()
{
    int a = 5;
    if (a < 5)
    {
        printf("A less then 5\n");
    }
    else if (a < 10)
    {
        printf("A less then 10\n");
    }
    else if (a < 15)
    {
        printf("A less then 15\n");
    }
    else{
        printf("A less then 100\n");
    }
    printf("After else ladder code");
    return 0;
    
}