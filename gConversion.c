#include <stdio.h>

char str[100000];
int main()
{
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == ',')
        {
            str[i] = ' ';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s", str);
    return 0;
}