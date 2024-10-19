#include <stdio.h>

int a[100000];
int b[100000];

int main()
{
    int length1 = 0, length2 = 0;
    scanf("%d", &length1);
    for (int i = 0; i < length1; i++)
    {
        scanf("%d", &a[i]);
    }

    // before copy --
    printf("Before copy\n");

    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");

    // befor copy  if we update the value this value will change both array--
    // a[2] = 100;

    // make copy
    for (int i = 0; i < length1; i++)
    {
        b[i] = a[i];
    }

    length2 = length1;

    // after copy will be updated an array it will not make changes in both array
    // a[2] = 100;

    // after copy
    printf("After copy\n");


    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}