/* 
is digit or alphabet , is alphabet print Capital or small
 */

#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
if(ch >='0' && ch <='9'){
    printf("IS DIGIT\n");
}
else{
    printf("ALPHA\n");
    if(ch >='A' && ch <= 'Z'){
        printf("IS CAPITAL\n");
    }
    else{
        printf("IS SMALL\n");
    }
}
return 0;
}


/* 
Digit or Alphabet 
for alphabet - IS CAPITAL or IS SMALL

ASCII "0" =  48 , "1" = 49 -----etc 
ASCII "a" = 97  , "b" = 98 , c....

 */