#include <stdio.h>

int main()
{
    int a, b;
    char s;
    scanf("%d %c %d", &a, &s, &b);
    if (s == '>')
    {
        // greater than
        if (a > b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else if (s == '<')
    {
        // less than
        if (a < b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else
    {
        // equal
        if (a == b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}