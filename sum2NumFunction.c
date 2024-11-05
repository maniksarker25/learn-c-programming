#include <stdio.h>

int sum(int x, int y)
{
    int result = x + y;
    return result;
}

int main()
{

    int x, y;
    scanf("%d %d", &x, &y);

    int result = sum(x, y);
    printf("%d\n", result);
    return 0;
}