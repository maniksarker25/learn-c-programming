#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n +5];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    // find the minimum value of array
    int min = a[0];
    for(int i=0; i<n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }

    // count the frequencies of min
    int minCount = 0;
    for(int i=0; i<n; i++){
        if(a[i] == min){
            minCount++;
        }
    }

    // is the frequency odd or even
    if(minCount % 2 == 0){
        printf("Unlucky");
    }
    else{
        printf("Lucky");
    }

    return 0;
}