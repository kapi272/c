//recursion in math
#include<stdio.h>

int f(int n); // function declaration

int main(){
    int x = 4;
    
    printf("f(f(%d)) = %d\n", x, f(f(x)));
    printf("f(%d*%d) = %d\n", x, x, f(x*x));
    return 0;
}

int f(int n){
    if(n <= 1) return 1;
    return n * f(n-1); // factorial function as example
}