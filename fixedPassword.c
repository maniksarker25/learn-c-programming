/* 
Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

Note: The "Correct" password is the number 1999.
 */

// #include <stdio.h>

// int main()
// {
//     int password;
//     int existPassword = 1999;
//     // scanf("%d",&n);

//     while (1)
//     {
//         scanf("%d\n", &password);
//         if (existPassword == password)
//         {

//             printf("Correct\n");
//             break;
//         }
//         else
//         {

//             printf("Wrong\n");
//         }
//     }
//     return 0;
// }




// new 

#include <stdio.h>

int main(){
    int n;

    while (scanf("%d",&n) != EOF)
    {
        if(n== 1999){
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }

    return 0;
    
}