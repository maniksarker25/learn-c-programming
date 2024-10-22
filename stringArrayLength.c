#include<stdio.h>

int main(){
    char str[10] = "abcd";

    int length = 0;
    for(int i = 0;str[i] != '\0';i++){
        length++;
    }

    printf("%d\n",length);

}