/*
need to print this pattern

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7


 */

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        // printf("%d\n", i);
        for(int j = 1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}