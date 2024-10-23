#include<stdio.h>
#include<string.h>

int main(){
    char str[100] = "nice";
    
    // reverse string normally using loop --
    // int length = strlen(str);

    // for(int i = 0,j=length -1;i<=j;i++,j--){
    //     char temp = str[i];
    //     str[i] = str[j];
    //     str[j] = temp;
    // }

    // reverse string with library function
    strrev(str);

    printf("%s\n",str);

    return 0;
}