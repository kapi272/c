// end the numbers when the user enters the number n, prints 1 to n
// rang 1 - 10

#include<stdio.h>
int main(){
    int n, i;
    printf("Enter the number whare you want to stop\n");
    scanf("%d", &n);
    printf("=============================================================\n");

    for(i = 1; i<=10; i++){

        if(i == n){
            break;// if we use =" break "= code exit the loop, but if we use =" continue "= code will skip the number and continue the loop
                  // if we use return 0; code will exit the program, the below code will not execute
                  // return 0;
        }
        printf("%d\n", i);
    }

    printf("End\n");
    return 0;
}