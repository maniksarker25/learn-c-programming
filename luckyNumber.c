#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int firstNumber = n / 10;
    int secondNumber = n % 10;
    if(secondNumber == 0){
        printf("YES\n");
    }
   else if(firstNumber % secondNumber == 0 || secondNumber % firstNumber == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}