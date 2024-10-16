#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    char s, q;
    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);
    if (s == '+')
    {
        if (a + b == c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d\n", a + b);
        }
    }
    else if (s == '-')
    {
        if (a - b == c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d\n", a - b);
        }
    }
    else
    {
        if (a * b == c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d\n", a * b);
        }
    }
    return 0;
}