

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int luckyCount=0;
    for (int i = a; i <= b; i++)
    {
        int temp = i;
        bool isValid = true;

        while (temp > 0)
        {
            int lastDigit = temp % 10;
            if (lastDigit != 4 && lastDigit != 7)
            {
                isValid = false;
                break;
            }
            temp /= 10;
        }

        if (isValid)
        {
            printf("%d ", i);
            luckyCount++;
        }
    }
    if(luckyCount == 0){
        printf("-1");
    }

    return 0;
}
