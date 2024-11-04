// sum with recursion

// #include<stdio.h>

// int a[100000];
// int sum;

// void getSum(int i, int n)
// {
//     if (i == n)
//     {
//         return;
//     }

//     sum += a[i];
//     getSum(i + 1, n);
// }

// int main()
// {

//     int n;
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     sum = 0;
//     getSum(0,n);
//     printf("%d\n",sum);
//     return 0;
// }




// other approach 

// sum with recursion

#include<stdio.h>

int a[100000];

// get the sum i to n
int getSum(int i, int n)
{
    if (i == n)
    {
        return 0;
    }

 
  return a[i] + getSum(i + 1, n);
}

int main()
{

    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
  int result =  getSum(0,n);
    printf("%d\n",result);
    return 0;
}