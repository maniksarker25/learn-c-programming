#include<stdio.h>

int main(){

    char a[10] = "fef";
    char b[10] = "abcdefyt";

    int length = strlen(b);

    // copy b to a string normally ----------------------
    // for(int i = 0;i <length;i++){
    //     a[i] = b[i];
    // }
    // a[length] = '\0';


    // copy a string to other string by using library function ----
    // strcpy(destination,source);
    strcpy(a,b);

    printf("%s => ", a);
    printf("%s", b);

    return 0;
}