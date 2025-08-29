// strings using pointer and dynamic memory
#include<stdio.h>
#include<stdlib.h>

int main(){
    char *str = malloc(100 * sizeof(char)); // allocate memory

    if(str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, 100, stdin); // read input from user

    puts(str); // print the string

    free(str); // free allocated memory
    return 0;
}

//cannot use fgets to read user input into a string literal via a pointer,
//because string literals are stored in read-only memory.