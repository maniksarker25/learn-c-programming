#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    long long sum = 0;
    for(int i = 0;i<n;i++){
        sum += a[i];
    }
    if(sum < 0){
       sum = sum * -1;
    }
    printf("%lld\n",sum);
    return 0;
}