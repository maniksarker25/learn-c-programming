#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int cs = 0; cs < t; ++cs)
    {
        int n;
        scanf("%d", &n);
        long long result = 1;
        for (int i = 1; i <= n; ++i)
        {
            result *= i;
        }
        printf("%lld\n", result);
    }
    return 0;
}