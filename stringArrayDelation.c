#include<stdio.h>

int main(){

    char str[8];
    scanf("%s", str);

    int delIndex = 3;

    for(int i  = delIndex;i<=6;i++){
        str[i] = str[i + 1];
    }
    printf("%s", str);


    return 0;
}