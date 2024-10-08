#include <stdio.h>
#include<math.h>

int main(){
    int sum = 0;
    for(int i = 1;i<=10;i++){
        printf("%d + %d = ",sum , i);
        sum+=i;
        printf("%d\n",sum);
        // Here we need to calculate the sum of the all i

    }
    printf("Total = %d\n",sum);
}

