#include<stdio.h>

int a[100000];

int main(){

    int length;
    scanf("%d",&length);
    for(int i=0; i<length; i++){
        scanf("%d",&a[i]);
    }

    int index,value;
    scanf("%d %d",&index,&value);
    // insertion -------
    // increase the length by one 
    length++;

    //then send all to one step right => lest index to insertion index
    for(int i = length-1;i>=index;i--){
        a[i+1] = a[i];
    }

    // then set value 
    a[index] = value;

    for(int i = 0;i<length;i++){
        printf("%d ",a[i]);
    }   
    return 0;
}