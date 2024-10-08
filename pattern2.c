/* 

need to print 
          1
        2 1
      3 2 1
    4 3 2 1
  5 4 3 2 1
 */


#include<stdio.h>


int main(){
    int n = 10;
    for(int i = 1;i<=n;i++){
        // printf("%d",i);

        for(int j = n;j>i;j--){
            printf("  ");
            
        }
        // printf("nice");


        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
       
    }
}