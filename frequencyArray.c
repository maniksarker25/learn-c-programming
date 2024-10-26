#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<m;i++){
        int appearTimes = 0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                appearTimes++;
            }
        }
        printf("%d\n",appearTimes);
    }

    return 0;
}







// #include <stdio.h>

// int main()
// {
//     int N, M;
//     scanf("%d %d", &N, &M);

//     int freq[M + 1]; // Frequency array for numbers from 1 to M
//     // Initialize the frequency array with 0
//     for (int i = 1; i <= M; i++)
//     {
//         freq[i] = 0;
//     }

//     // Read the array A and update frequencies
//     for (int i = 0; i < N; i++)
//     {
//         int num;
//         scanf("%d", &num);

//         freq[num]++; // Increment the count for the number
//     }

//     // Output the frequency of each number from 1 to M
//     for (int i = 1; i <= M; i++)
//     {
//         printf("%d\n", freq[i]);
//     }

//     return 0;
// }
