#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int *p = &x, *q = &y;

    int temp = *p;
    x = *q;
    y = temp;

    printf("%d %d\n", x, y);
    return 0;
}