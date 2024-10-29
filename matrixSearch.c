#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int element;
       for (int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&element);
    int flag = 0;
    for (int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(arr[i][j] == element){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0){
        printf("will take number");
    }else{
        printf("will not take number");
    }
    return 0;
}