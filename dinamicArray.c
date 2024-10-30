#include <stdio.h>
#include <stdlib.h>
int main()
{
    // allocate memory
    int *arr = (int *)malloc(5 * sizeof(int));

    // value assign
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int *temp = arr;

    // reallocate memory for resizing array
    arr = (int *)realloc(arr, 10 * sizeof(int));

    if (arr == NULL)
    {
        arr = temp;
    }
    // else
    // {
    //     printf("Error\n");
    // }

    for (int i = 5; i < 10; i++)
    {
        arr[i] = i+1;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    // free the memory with deallocate
    free(arr);

    return 0;
}