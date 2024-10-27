#include <stdio.h>

int main()
{

    // n for row , m for column
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n + 5][m + 5];

    // for input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // change some values 
    a[1][2] = 100;
    a[2][3] = 300;

    // print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
    return 0;
}