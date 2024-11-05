// recursion  => print 1 to N


#include<stdio.h>




void fun(int x,int n){
    if(x > n){
        return;
    }
    printf("%d\n",x);
    fun(x + 1,n);
}


int main(){
    int n;
    scanf("%d",&n);
    fun(1,n);


    return 0;
}