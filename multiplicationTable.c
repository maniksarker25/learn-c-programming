
/*

make a multiplication table
  */

#include<stdio.h>


int main(){
    int num;
    scanf("%d",&num);
  for(int j = 1;j<=num;j++){
      for(int i=1;i<=10;i++){
        printf("%d  x  %d = %d\n",j ,i,j *i);
    }
    printf("\n\n");
  }

    return 0;
}

