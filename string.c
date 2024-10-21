#include <stdio.h>

int main()
{
    // char str[10] = {'a','b','c','d','e'};
    // char str[15] = "Hello world";

    // using loop for print ---------------
    //   for(int i=0; i<4;i++){
    //     printf("%c",str[i]);
    //   }

    // direct print ------------
    // printf("%s",str);

    char str[15];
    // take input continuously before new line --------
    // scanf("%[^\n]s",str);

    // TAKE INPUT BY FGETS----------------------
    fgets(str,sizeof(str),stdin);

    // show output by fputs----------------------
    fputs(str,stdout);

    // printf("%s",str);6


    return 0;
}