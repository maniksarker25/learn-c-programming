// function with pointer string

#include <stdio.h>
#include<string.h>
// here the string work with reference
// void fun(char *a, int n)
// {

//     printf("Fun => %s\n", a);
//     a[0] = 'M';
// }
void fun(char *a, char *b)
{

    printf("Fun => %s\n", a);
    a = strcpy(a, b);
}

int main()
{

    char a[10] = "manik";
    char b[10] = "sarker";
    fun(a, b);

    printf("Main fun => %s", a);
    return 0;
}