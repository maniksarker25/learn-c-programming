#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int *p = arr;

    // check the pointer how to work is the arr store the first index address
    printf("Array first index address => %d\n",&arr[0]);
    printf("arr pointer address => %d\n",p);

    // print 2nd index address
    printf("%d",(p+1)); // increase 4 because it's a int array

    return 0;
}