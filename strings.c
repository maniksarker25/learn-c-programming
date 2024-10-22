#include<stdio.h>

char a[10];
char b[10];

int main(){
    scanf("%s",a);
    scanf("%s",b);

    int sizeOfA = 0;
    int sizeOfB = 0;
    for(int i = 0;a[i] != '\0';i++){
        sizeOfA++;
    }
    for(int i = 0;b[i] != '\0';i++){
        sizeOfB++;
    }
    printf("%d %d\n",sizeOfA,sizeOfB);
    printf("%s%s\n",a,b);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s",a,b);

    return 0;

}