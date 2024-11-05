// recursion +> print n to 1

#include <stdio.h>

void fun(int x, int n)
{
    if (x > n)
    {
        return;
    }
    fun(x + 1, n);

    // print the x after call function and that print 10 to 1 because that print work when the recursion going back after completing the task
    if (x >= 1 && x < n)
    {
        printf(" ");
    }
    printf("%d", x);
}

int main()
{
    int n;
    scanf("%d", &n);

    fun(1, n);

    return 0;
}