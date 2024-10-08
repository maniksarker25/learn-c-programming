/*
given N numbers. Count how many of these values  are are even,odd, positive and negative
input :
first line contains one number
second line contains N numbers

example :
input:
5
-5 0 -3 -4 12

output:
Even:3
Odd:2
Positive:1
Negative:3
 */

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        // printf("%d ",x);
    
        if (x % 2 == 0)
        {
            // even
            evenCount++;
            // printf("Even is %d",evenCount);
        }
        else
        {
            // odd
            oddCount++;
        }
        if (x > 0)
        {
            // positive
            positiveCount++;
        }
        else if (x < 0)
        {
            // negative
            negativeCount++;
        }
    }
    printf("Even: %d\n",evenCount);
    printf("Odd: %d\n",oddCount);
    printf("Positive: %d\n",positiveCount);
    printf("Negative: %d\n",negativeCount);
    return 0;
}