#include <stdio.h>

int main() {
    int n;
    printf("Enter the position of Fibonacci number (n >= 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Enter at least 2 for the position\n");
        return -1;
    }

    int fib[n];
    fib[0] = 0; // First Fibonacci number
    fib[1] = 1; // Second Fibonacci number

    // Calculate Fibonacci numbers for indices 2 to n-1
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    // Print the n-th Fibonacci number (1-based indexing for user)
    printf("Fibonacci number at position %d: %d\n", n, fib[n-1]);

    return 0;
}