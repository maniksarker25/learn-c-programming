#include<stdio.h>
#include<string.h>
int main(){
    char str[10] = "abhrtjr";
    
    // by using normal loop---------
    // int length = 0;
    // for(int i = 0;str[i] != '\0';i++){
    //     length++;
    // }

    // by using library function------------
    int length = strlen(str);

    printf("%d\n",length);

}