#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if ('a' <= ch && ch <= 'z')
    {
        // lowercase
        ch -= 32;
    }
    else
    {
        // upper case
        ch += 32;
    }
    printf("%c", ch);
    return 0;
}