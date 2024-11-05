// function with string pass

#include<stdio.h>
#include<string.h>
// function with string pass
void length(char x[]){
    int n = strlen(x);
    printf("string length=> %d",n);
}


int main(){
    char a[20] = "programming";
    length(a);

    return 0;
}