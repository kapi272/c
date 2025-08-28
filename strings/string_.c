//simple string to take input as name

#include<stdio.h>

int main(){
    char name[50];
    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin); // allows spaces
    printf("Name is       : %s\n", name); // fgets includes the newline
    return 0;
}

//structure of fgets
//char *fgets(char *str, int n, FILE *stream);
//str: pointer to the array where the string will be stored
//n: maximum number of characters to read (including null terminator)
//stream: input stream (e.g., stdin for standard input)