/* 

Given a number N and a 2D array A of size N * N. Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).

Input
First line contains a number N (1 ≤ N ≤ 100) described above.

Each of the next N lines will contain N numbers ( - 100 ≤ Ai ≤ 100).

Output
Print the absolute difference between the summation of the matrix main diagonals.
 */

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);

    int m[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&m[i][j]);
        }
    }

    int main_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;

     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i ==j){
                main_diagonal_sum += m[i][j];
            }
            if(i + j == n-1){
                secondary_diagonal_sum +=m[i][j];
            }
        }
    }

    // abs function for absolute difference between 
    int diff = abs(main_diagonal_sum - secondary_diagonal_sum);

    printf("%d\n", diff);
    return 0;
}