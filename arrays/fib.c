//
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of Fibonacci terms (n >= 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Enter at least 2 for the number of terms\n");
        return 1;
    }

    int fib[n];
    fib[0] = 0; // First Fibonacci number
    fib[1] = 1; // Second Fibonacci number

    // Calculate Fibonacci numbers for indices 2 to n-1
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    // Print the Fibonacci series
    printf("Fibonacci series of %d terms: ", n);
    for (int j = 0; j < n; j++) {
        printf("%d ", fib[j]);
    }
    printf("\n");

    return 0;
}

