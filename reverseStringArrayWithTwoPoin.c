
#include <stdio.h>

char str[100000];
int main()
{
    int n;
    scanf("%d", &n); // Input the length of the string

    scanf("%s", str);

    // Reverse the string
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        // Swap characters
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Print the reversed string
    printf("%s\n", str);

    return 0;
}
