/*

Given 2 numbers N
, M
 and an array A
 of N
 numbers. For every number from 1 to M
, print how many times this number appears in this array.

Input
First line contains two numbers N
, M
 (1≤N≤105,1≤M≤105)
.

Second line contains N
 numbers (1≤Ai≤M)
.

Output
Print M
 lines, the ith
 line should contain number of times that the number i
 appears in A
 */
#include <stdio.h>
int freq[100005];
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        // update frequency array 
        freq[a[i]]++;
    }

    for(int i = 1;i<=m;i++){
        printf("%d\n",freq[i]);
    }

    return 0;
}