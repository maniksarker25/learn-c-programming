#include <stdio.h>

int a[100000];
int b[100000];
int main()
{
    int length;
    scanf("%d", &length);
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }

    // make copy b array with reverse
    for (int i = 0, j = length - 1; i < length; i++, j--)
    {
        b[j] = a[i];
    }

    // then the b array set in a array
    for (int i = 0; i < length; i++)
    {
        a[i] = b[i];
    }

    // print two arrays
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}