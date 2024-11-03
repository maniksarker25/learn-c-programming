// swap with function with pointer 


#include<stdio.h>


// void swap(int a , int b){ // copy of a,b not eject a,b

void swap(int *a , int *b){ // address of a , b
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){
    int a = 5 , b = 6;

    swap(&a,&b);

    printf("a = %d, b = %d\n",a,b);

    return 0;

}