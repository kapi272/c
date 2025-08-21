//calculating the memory of array

#include<stdio.h>

int main(){
    char name[5];
    int numb[5];
    float dec[5];

    printf("Memory size calculations:\n");
    printf("========================\n");
    
    // Calculate total memory for each array
    printf("char array  [5]: %zu bytes\n", sizeof(name));
    printf("int array   [5]: %zu bytes\n", sizeof(numb));
    printf("float array [5]: %zu bytes\n", sizeof(dec));
    
    printf("\nPer element size:\n");
    printf("================\n");
    printf("char  : %zu byte\n", sizeof(char));
    printf("int   : %zu bytes\n", sizeof(int));
    printf("float : %zu bytes\n", sizeof(float));
    
    printf("\nCalculation breakdown:\n");
    printf("=====================\n");
    printf("char[5]  = %zu × 5 = %zu bytes\n", sizeof(char), sizeof(name));
    printf("int[5]   = %zu × 5 = %zu bytes\n", sizeof(int), sizeof(numb));
    printf("float[5] = %zu × 5 = %zu bytes\n", sizeof(float), sizeof(dec));
    
    printf("\nTotal memory used: %zu bytes\n", sizeof(name) + sizeof(numb) + sizeof(dec));
    
    return 0;
}