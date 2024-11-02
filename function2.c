// function : return + no parameters

#include<stdio.h>


// write function what is return value but not take any parameters

int add(){
    int a,b;
   scanf("%d %d",&a,&b);

   int sum = a + b;
   return sum;

}

int main(){

    printf("First result =>%d\n",add());
    printf("Second result =>%d",add());
    return 0;

}