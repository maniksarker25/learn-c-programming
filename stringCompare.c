#include<stdio.h>
#include<string.h>
int main(){
    char a[100] = "air";
    char b[100] = "apple";


    // compare strings with libraries functions

    int cmp = strcmp(a, b);

    printf("%d",cmp);
    return 0;
}