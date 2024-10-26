
// find unique characters ---------
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "apple";

    int freq[26] = {0};

    int str_len = strlen(str);

    for (int i = 0; i < str_len; i++)
    {
        char ch = str[i];
        int index = ch - 'a';
        freq[index] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        // printf("%d", freq[i]);
        if (freq[i] == 1)
        {
            printf("%c", i + 'a');
        }
    }

    return 0;
}