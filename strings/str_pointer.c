//string using pointers

#include<stdio.h>

int main(){
    char *name; // string

    gets(&name);
    puts(&name);

    int *number;//string
    number = "123";// mobile number
    puts(&number);
    return 0;
}