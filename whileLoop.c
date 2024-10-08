#include <stdio.h>
#include<math.h>
int main() {
    printf("Before while loop\n");

    int i = 1;
    while (i <= 5) { 
        printf("Inside while loop = %d\n", i);
        i++; 
    }

    printf("After while loop\n");
    return 0;
}
