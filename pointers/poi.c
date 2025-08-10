#include<stdio.h>

int main(){
    int age;
    int *pointer;

    printf("Enter the age of person\n");
    scanf("%d", &age);
    
    pointer = &age;  // Assign address of age to pointer
    
    printf("Value of age: %d\n", age);
    printf("Address of age: %p\n", &age);
    printf("Value pointed by pointer: %d\n", *pointer);
    printf("Address stored in pointer: %p\n", pointer);
    printf("Address of pointer %p\n", &pointer);
    
    return 0;
}