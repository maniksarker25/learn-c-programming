#include <stdio.h>

int main(){
    for(int i = 100;i<=300;i++){
        printf("Checking %d\n",i);
        if(i % 2==0 && i%3 == 0 && i%5 == 0){
            printf("The number is %d\n",i);
            break;

        }
    }
}