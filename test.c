#include <stdio.h>
int main()
{
    int a = 10;
    int x = a++;
    printf("x = %d\n", x);
    --x;
    printf("x = %d\n", x);
    a--;
    int y = --x;
    printf("%d", y--);
}