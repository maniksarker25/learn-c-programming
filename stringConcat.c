#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "hello ";
    char b[20] = "world";

    // string concat -------------
    // int len_a = strlen(a);
    // int len_b = strlen(b);

    // int length = len_a + len_b;

    // for(int i = len_a , j=0; i < length; i++,j++){
    //     a[i] = b[j];
    // }
    // a[length] = '\0';
    // printf("%s\n",a);

    // string concat with library functions -------------
    strcat(a,b);
    printf("%s\n", a);

    return 0;
}