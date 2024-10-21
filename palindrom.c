#include<stdio.h>

int a[100000];
int main(){
    int n;
    scanf("%d",&n);

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
    printf("Yes\n");
   }
   else{
    printf("No\n");
   }

   return 0;
   
}