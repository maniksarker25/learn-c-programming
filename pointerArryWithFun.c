// function with pointer array

#include <stdio.h>

// here the array work with reference
void fun(int *a, int n)
{

    for (int i = 0; i < n; i++)
    {
        // a[i] *=2;
        // access array element  with dereference
        printf("%d ", *(a + i));
    }
}

int main()
{

    int a[5] = {1, 2, 3, 7, 5};
    fun(a, 5);

    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}