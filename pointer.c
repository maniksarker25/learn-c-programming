#include<stdio.h>

int main(){
    int a = 5;
    // declare a pointer 
    int *b = &a;  // * dereferencing -----

    printf("Address => %d\n", b); // print memory address
    printf("Value => %d\n", *b); // print value for this memory address by using dereferencing
    return 0; 
}