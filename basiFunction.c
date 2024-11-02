// return + parameter function 
#include<stdio.h>


// write a function for add 2 number 
int add(int a,int b){
    int sum = a + b;
    return sum;
}


int main(){
    int result = add(10,20);
    printf("result = %d\n", result);
    return 0;
}