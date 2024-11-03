// variable scope

#include <stdio.h>

// global scope => this value will accessable from abt scope 
// int a = 5 , b = 6;  

void add(int a, int b)
{
    // here you can see print the different memory address
    printf("Inside function => %p %p\n", &a, &b);
    int temp = a;
    a = b;
    b = temp;
}




int main()
{

    int a = 5, b = 6;
    printf("%p %p\n", &a, &b);

    add(a, b);

    // doesn't make swap for local variable
    printf("%d %d\n", a, b);

    return 0;
}