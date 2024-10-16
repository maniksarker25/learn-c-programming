#include<stdio.h>

int main(){
    int a[5];
    // take input for array using loop
    for(int i = 0;i<5;i++){
        scanf("%d",&a[i]);
    }
    // print just one value from array---------
    // printf("%d",a[2]);
    for(int i = 0;i<5;i++){
        // print all data from array by using loop
        // printf("%d ",a[i]);
        // print memory address---------
        printf("%d ",&a[i]);
    }

    return 0;
}