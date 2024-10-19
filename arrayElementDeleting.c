#include <stdio.h>

int a[100000];
int main()
{
    int length;
    scanf("%d", &length);
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }


    int delIndex;
    scanf("%d", &delIndex);
    for (int i = delIndex; i < length -1; i++)
    {
        a[i] = a[i + 1];
    }
    length--;

    // print updated array
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}