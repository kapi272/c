#include <stdio.h>
// This is a simple C program that demonstrates different types of instructions
// this are Statements that the compiler will execute in order
int main() {
    // Declaration instruction
    int a, b, sum;
    
    /* int a, b, c = 1; // This is also valid, but c is not used in this example,
                          we cannot use and declare it in the same line */


    // Assignment instruction
    a = 10;
    b = 20;

    // Arithmetic instruction
    // [(+), (-), (*), (/), (%)]
    // modulus operator (%) is can not be used with floating point numbers
    sum = a + b;

    // Function call instruction
    printf("Sum of %d and %d is %d\n", a, b, sum);

    //control instruction
    if (sum > 0) {
        printf("Positive sum\n");
    } else {
        printf("Non-positive sum\n");
    }

    // Return instruction
    return 0;
}