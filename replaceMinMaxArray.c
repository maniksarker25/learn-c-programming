#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n+5];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int min = a[0],max = a[0];
    int minPosition =0,maxPosition=0;

    for(int i=0; i<n; i++){
        if(a[i] < min){
            min = a[i];
            minPosition = i;
        }
        if(a[i] > max){
            max = a[i];
            maxPosition = i;
        }
    }

    // printf("%d\n",min);
    // printf("%d\n",max);
    // printf("%d\n",minPosition);
    // printf("%d\n",maxPosition);

    int temp = a[minPosition];
    a[minPosition] = a[maxPosition];
    a[maxPosition] = temp;
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }

    return 0;

}