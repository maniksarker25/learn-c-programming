#include <stdio.h>
char s[1000];

int main()
{
    scanf("%s", s);

    int length = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        length++;
    }

    int i = 0, j = length - 1;
    int palindrome = 1;

    while (i <= j)
    {

        if (s[i] != s[j])
        {
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (palindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}