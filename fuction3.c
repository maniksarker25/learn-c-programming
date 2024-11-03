// function : no return + parameter

#include <stdio.h>

// write function what is no return value but  take any parameters

void add(int a, int b)
{
    int sum = a + b;
    printf(" Result => %d\n", sum);
    return;
}

void alphaCheck(char c){
    if('a'<=c && c<='z'){
        printf("Lower case\n");
    }
    else{
        printf("Uppercase\n");
    }
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    add(a,b);

    alphaCheck('a');
    alphaCheck('F');

    return 0;

}