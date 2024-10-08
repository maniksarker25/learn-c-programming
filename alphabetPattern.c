#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(char i='A';i< 'A' + n;i++){
        for(char j='A';j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}