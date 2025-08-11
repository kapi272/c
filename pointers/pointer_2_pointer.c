// pointer to pointer == double pointer //
//=====================================//
// it is a pointer that points to another pointer, stores the address of the first pointer

#include<stdio.h>
int main(){
    int var = 5;
    int *ptr = &var;
    int **dptr = &ptr;

    printf("Value of var: %d\n", var);
    printf("Value pointed by ptr: %d\n", *ptr);
    printf("Value pointed by dptr: %d\n", **dptr);

    return 0;
}