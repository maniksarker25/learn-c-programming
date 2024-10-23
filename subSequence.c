#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];

    scanf("%s", s);

    char target[] = "hello";
    int target_len = strlen(target);
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == target[j])
        {
            j++; // Move to the next character in "hello"
        }
        if (j == target_len)
        { 
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");

    return 0;
}