// use of pointer in the arrays

#include<stdio.h>

int main(){
    int age = 18;
    int *ptr = &age;

    
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);
}