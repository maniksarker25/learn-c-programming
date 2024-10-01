#include <stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
    int a = 5;
    int b = 5;

    bool isEqual = a == b;

    printf("The first comparision %d\n",a == b); // output 1 because the number are equal

    printf("%d\n",a !=b); // output 2 because the number are not equal


    printf("%d",isEqual); // print 1
    // return 0 for the stop
    return 0;
}