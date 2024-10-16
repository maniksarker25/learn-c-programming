#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    long long sum =(1ll * (n+1) *n)/2;


    printf("%lld\n",sum);
    return 0;
}