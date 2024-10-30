#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *pArr = arr;
    for (int i = 0; i < n; i++)
    {
        if (*pArr > 0)
        {
            *pArr = 1;
        }
        else if (*pArr < 0)
        {
            *pArr = 2;      
        }
        pArr++;
    }

    pArr = arr;
    for(int i = 0; i < n; i++){
        printf("%d ", *pArr);
        pArr++;
    }

    printf("\n");

    return 0;
}