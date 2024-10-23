#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        char s[51], t[51];
        scanf("%s %s", s, t);

        int slen = strlen(s);
        int tlen = strlen(t);

        int loopLen = 0;
        if (slen > tlen)
        {
            loopLen = slen;
        }
        else
        {
            loopLen = tlen;
        }

        for (int i = 0; i < loopLen; i++)
        {
            if (i < slen)
            {
                printf("%c", s[i]);
            }
            if (i < tlen)
            {
                printf("%c", t[i]);
            }
        }
        printf("\n");
    }

    return 0;
}