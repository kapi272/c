#include<stdio.h>

int fibonacci(int n);

int main(){
    int x;
    printf("Enter the number to get Fibonacci value: ");
    scanf("%d", &x);
    
    if(x < 0){
        printf("Please enter a non-negative number.\n");
        return 1;
    }
    
    printf("The Fibonacci value of %d is %d\n", x, fibonacci(x));
    return 0;
}

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}