#include <stdio.h>
int main() {
    int N;
    // Read the input value for N
    scanf("%d", &N);
    // Outer loop for the rows
    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++) {
            printf("  ");
        }
        // Print stars in a pyramid pattern
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }
        // Move to the next line after printing each row
        printf("\n");
    }
    
    return 0;
}
