#include <stdio.h>
//                                           type conversion
//                                                 /\
//                                                /  \
//                                               /    \
//              1) Implicit conversion (automatic)     2) Explicit conversion (casting)
// 
// int op int -> int
// float op int -> float
// float op float -> float
// char op int -> int (ASCII value)
// char op float -> float (ASCII value converted to float)
// double op int -> double
// double op float -> double
// double op double -> double    
                                
int main() {
    int i = 10;
    float f = 5.75;
    char c = 'A';

    // Implicit type conversion (automatic)
    float result1 = i + f; // int is converted to float
    printf("Implicit conversion (int + float): %f\n", result1);

    // Explicit type conversion (casting)
    int result2 = i + (int)f; // float is converted to int
    printf("Explicit conversion (int + (int)float): %d\n", result2);

    // Char to int conversion
    int result3 = c + i; // char is converted to int (ASCII value)
    printf("Char to int conversion (char + int): %d\n", result3);

    // Double to int conversion
    double d = 9.99;
    int result4 = (int)d; // double is converted to int
    printf("Double to int conversion: %d\n", result4);

    return 0;
}