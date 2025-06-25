//syntax
//                 condition ? expression1(True) : expression2(False);
// Example
#include <stdio.h>      
int main() {
    int a = 10, b = 20;
    int max = (a > b) ? a : b; // Ternary operator to find the maximum of a and b
    printf("The maximum value is: %d\n", max);
    return 0;
}