// take input from user until they enter an odd number

#include<stdio.h>
int main() {
    int n;
    printf("=====================================================================================================\n");
    printf("do while loop\n");
    printf("=====================================================================================================\n");

    do {
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("You entered: %d\n", n);

        if(n % 2 != 0){
            break;
        }
    } while (1);

    printf("Exited loop because you entered an odd number.\n");
    return 0;
    
}

