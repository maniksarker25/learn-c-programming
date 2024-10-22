#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    for(int i = 1;i<=t;i++){
        char s[100];
        scanf("%s",s);
        int length =0;
        for(int j= 0;s[j] != '\0';j++){
          length++;
        }

        if(length > 10){
            printf("%c",s[0]);
            printf("%d",length -2);
            printf("%c",s[length-1]);
            printf("\n");

        }
        else{
            printf("%s\n",s);
        }
    }

    return 0;
}