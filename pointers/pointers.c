//Pointer information

/*
WHAT IS A POINTER?
- A pointer is a variable that stores the memory address of another variable
- Instead of storing a value directly, it stores the location where the value is stored

SYNTAX:
data_type *pointer_name;

OPERATORS:
& (Address-of operator) - Gets the address of a variable
* (Dereference operator) - Gets the value at the address stored in pointer

EXAMPLE:
int x = 10;
int *ptr = &x;  // ptr stores address of x
printf("%d", *ptr);  // prints 10 (value at address stored in ptr)

KEY CONCEPTS:
1. Declaration: int *ptr;
2. Initialization: ptr = &variable;
3. Dereferencing: *ptr (gets value)
4. Address: &variable (gets address)

BENEFITS:
- Dynamic memory allocation
- Efficient array handling
- Function parameter passing by reference
- Data structures like linked lists

TYPES OF POINTERS:
- Null pointer: int *ptr = NULL;
- Wild pointer: uninitialized pointer
- Void pointer: void *ptr; (can point to any data type)
- Function pointer: points to functions
*/

#include<stdio.h>

int main(){
    int x = 42;
    int *ptr;
    
    ptr = &x;  // ptr now stores address of x
    
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value stored in ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);
    
    return 0;

}