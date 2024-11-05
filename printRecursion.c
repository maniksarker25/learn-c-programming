#include<stdio.h>



void show(int n){

    if(n == 0){
        return;
    }
    printf("I love Recursion\n");
    show(n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    show(n);
    return 0;
}