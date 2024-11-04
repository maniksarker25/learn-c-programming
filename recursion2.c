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
    printf("%d ", x);
}

int main()
{
    int n = 10;

    fun(1, n);

    return 0;
}