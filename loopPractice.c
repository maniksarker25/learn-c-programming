// #include<stdio.h>

// int main(){
//     for(int i = 0;i<3;i++){
//         // 3 iterations in for this loop
//         // printf("Outer loop\n");   
//         for(int j = 0;j<5;j++){
//             // printf("%d ",j+1);
//             printf("Inner loop\n"); // 15 iterations in this loop 
//         }
//         printf("\n");
//     }

//     return 0;
// }



#include <stdio.h>

int main(){
    int cnt = 0;

    for(int i = 0;i<3;i++){
        for(int j = 0;j<6;j++){
            for(int k = 0;k<10;k++){
                cnt++; // total = 180 , here total 180 iterations ---
            }
        }
    }
    printf("%d\n",cnt);

    return 0;
}