#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += lastDigit;
        n /= 10;
    }
    printf("%d\n", sum);
    return 0;
}