#include <stdio.h>

int main()
{

    // char size + null + faka index akta 
    char str[8];
    scanf("%s", str);
    int index = 2;
    char value = 'c';
    for(int i = 6;i>=index;i--){
        str[i+1] = str[i];
    }
    str[index] = value;
    printf("%s", str);

    return 0;
}

// 2 number index a c insert korta hba
