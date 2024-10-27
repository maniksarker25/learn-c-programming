// initialize the 2D array

#include <stdio.h>

int main()
{

    int arr[3][3] ={{1,3,2},{4,6,3},{7,8,4}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("i = %d, j = %d, value = %d ", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}