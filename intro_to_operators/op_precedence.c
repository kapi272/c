#include <stdio.h>
// operator precedence in c
//                                            (), *, /, %
//                                                |
//                                                |
//                                               +, -
//                                                |
//                                                |
//                                       =, +=, -=, *=, /=, %=

// for same precedence operators, evaluation is done from left to right ("ASSOCIATIVE")

int main() {
    int a = 10, b = 5, c = 2;
    int result;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("\n");
    printf("\n");

    // Example 1: Multiplication has higher precedence than addition
    result = a + b * c; // b * c is evaluated first, then added to a
    printf("a + b * c = %d\n", result); // Output: 20

    // Example 2: Parentheses change precedence
    result = (a + b) * c; // a + b is evaluated first, then multiplied by c
    printf("(a + b) * c = %d\n", result); // Output: 30

    // Example 3: Division and multiplication have same precedence, evaluated left to right
    result = a / b * c; // (a / b) is evaluated first, then multiplied by c
    printf("a / b * c = %d\n", result); // Output: 4

    // Example 4: Assignment has lower precedence
    result = a + b * c - a / c;
    // b * c, a / c, then addition and subtraction left to right
    printf("a + b * c - a / c = %d\n", result); // Output: 15
    printf("\n");
    printf("\n");
    
    // associativity example
    int x = 4*3/6*2;
    printf("4*3/6*2 = %d\n", x); // Output: 4

    return 0;
}