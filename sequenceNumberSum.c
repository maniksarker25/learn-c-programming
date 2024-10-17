#include <stdio.h>

int main()
{
    int N, M;

    while (1)
    {
        scanf("%d %d", &N, &M);

        if (N <= 0 || M <= 0)
        {
            break;
        }

        if (N > M)
        {
            int temp = N;
            N = M;
            M = temp;
        }

        int sum = 0;

        for (int i = N; i <= M; i++)
        {
            printf("%d ", i);
            sum += i; 
        }

        printf("sum =%d\n", sum);
    }

    return 0;
}
