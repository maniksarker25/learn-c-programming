// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     int sum = 0;
//     for(int i=0; i<n; i++){     
//         scanf("%d",&a[i]);
//     }
//     for(int i=0; i<n; i++){
//         printf("%d\n",a[i]);
//         sum += a[i];
//     }
//     printf("%d\n",sum);
//     return 0;
// }






















// -------------------------------

#include <stdio.h>

int main() {
    int N, sum = 0;
    char digit;
    
    // Read the number of digits
    scanf("%d", &N);
    
    // Read the digits one by one and sum them up
    for (int i = 0; i < N; i++) {
        // Read each digit as a character
        scanf(" %c", &digit);
        
        // Convert the character to its integer value and add it to sum
        sum += digit - '0';  // '0' has an ASCII value of 48, so subtracting '0' gives the actual digit
    }
    
    // Print the total sum
    printf("%d\n", sum);
    
    return 0;
}



// -------------------------------------------------------
// #include <stdio.h>

// int main() {
//     int N, sum = 0;
    
//     // Read the number of digits
//     scanf("%d", &N);
    
//     // Declare an array to hold the digits as characters
//     char A[N + 1];  // Extra 1 for the null terminator to store string
    
//     // Read the string of digits
//     scanf("%s", A);
    
//     // Loop through the array of digits
//     for (int i = 0; i < N; i++) {
//         // Convert each character to integer and add it to the sum
//         sum += A[i] - '0';  // Convert character to its integer value
//     }
    
//     // Print the total sum
//     printf("%d\n", sum);
    
//     return 0;
// }
