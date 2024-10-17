#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int isPrime = 1;
    for (int i = 2; i < n; i++)
    {
      if(n % i ==0){
        printf("NO");
        isPrime = 0;
        break;
      }
    }
    if(isPrime){
        printf("YES");
    }
    return 0;
}