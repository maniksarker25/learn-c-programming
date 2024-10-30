#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int *x = &a, *y = &b, *z = &c;
    if (*x <= *y)
    {
        // a,c
        if (*x <= *z)
        {
            printf("%d", *x);
        }
        else
        {
            printf("%d", *z);
        }
    }
    else
    {
        // b,c
        if (*y <= *z)
        {
            printf("%d", *y);
        }
        else
        {
            printf("%d", *z);
        }
    }

    printf(" ");

    if (*x >= *y && *x >= *z)
    {
        printf("%d", *x);
    }
    else if (*y >= *x && *y >= *z)
    {
        printf("%d", *y);
    }
    else
    {
        printf("%d", *z);
    }

    printf("\n");

    return 0;
}