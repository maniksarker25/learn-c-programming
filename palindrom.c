#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
   int i = 0,j=n-1;
   int palindrome = 1;
   while (i<=j)
   {
    if(a[i] !=a[j]){
        palindrome = 0;
        break;
    }
    i++;
    j--;
   }

   if(palindrome){
    printf("YES\n");
   }
   else{
    printf("NO\n");
   }

   return 0;
   
}